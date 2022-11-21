/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:38:07 by itan              #+#    #+#             */
/*   Updated: 2022/11/21 18:15:13 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_factorial(long num)
{
	long	dst;

	dst = 1;
	if (num < 0)
		return (-1);
	if (num <= 1)
		return (dst);
	while (num > 1)
		dst *= num--;
	return (dst);
}
