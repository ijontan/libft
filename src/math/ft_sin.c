/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:47 by itan              #+#    #+#             */
/*   Updated: 2023/03/10 03:41:53 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_sin(double rad)
{
	int		i;
	double	dst;

	i = 0;
	dst = rad;
	while (++i <= 5)
	{
		if (i % 2 == 1)
			dst -= ft_power(rad, 1 + i * 2) / ft_factorial(1 + i * 2);
		else
			dst += ft_power(rad, 1 + i * 2) / ft_factorial(1 + i * 2);
	}
	return (dst);
}

double	ft_asin(double val)
{
	return (ft_atan(val * (double)ft_q_in_sqrt(-val * val + 1)));
}
