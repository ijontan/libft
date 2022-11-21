/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:46:04 by itan              #+#    #+#             */
/*   Updated: 2022/11/21 18:11:51 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_power(double num, int power)
{
	double	dst;

	dst = num;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power >= 1)
		dst *= num;
	return (dst);
}
