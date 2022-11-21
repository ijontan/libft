/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sin.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:42:47 by itan              #+#    #+#             */
/*   Updated: 2022/11/21 18:26:43 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_sin(double rad)
{
	int		i;
	double	dst;

	i = 0;
	dst = angle;
	while (++i <= 10)
	{
		if (i % 2 == 1)
			dst -= ft_power(angle, 1 + i * 2) / ft_factorial(1 + i * 2);
		else
			dst += ft_power(angle, 1 + i * 2) / ft_factorial(1 + i * 2);
	}
	return (dst);
}
