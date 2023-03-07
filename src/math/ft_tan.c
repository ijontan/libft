/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tan.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:48:13 by itan              #+#    #+#             */
/*   Updated: 2023/03/07 09:38:22 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef PI_4
# define PI_4 0.78539816339
#endif
#ifndef PI_2
# define PI_2 1.57079632679
#endif
#define A 0.0776509570923569
#define B -0.287434475393028

double	ft_tan(double rad)
{
	return (ft_sin(rad) / ft_cos(rad));
}

// I found this online also, no idea how it wocks,
// I think is some approximation of the taylor series
double	ft_atan(double val)
{
	double	val2;

	val2 = val * val;
	return (((A * val2 + B) * val2 + PI_4 - A - B) * val);
}

static double	xy(double x, double y, double z)
{
	if (x > 0.0)
		return (ft_atan(z));
	else if (y >= 0.0)
		return (ft_atan(z) + PI);
	else
		return (ft_atan(z) - PI);
}

static double	yx(double y, double z)
{
	if (y > 0.0)
		return (-ft_atan(z) + PI_2);
	else
		return (-ft_atan(z) - PI_2);
}

double	ft_atan2(double y, double x)
{
	double	z;

	if (x != 0.0)
	{
		if (ft_abs(x) > ft_abs(y))
		{
			z = y / x;
			xy(x, y, z);
		}
		else
		{
			z = x / y;
			yx(y, z);
		}
	}
	else
	{
		if (y > 0.0)
			return (PI_2);
		else if (y < 0.0)
			return (-PI_2);
	}
	return (0.0);
}
