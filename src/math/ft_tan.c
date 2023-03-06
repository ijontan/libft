/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tan.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:48:13 by itan              #+#    #+#             */
/*   Updated: 2023/03/07 02:30:07 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef M_PI_4
# define M_PI_4 0.78539816339
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
	return (((A * val2 + B) * val2 + M_PI_4 - A - B) * val);
}
