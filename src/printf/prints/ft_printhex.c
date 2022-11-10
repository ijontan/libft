/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:57:51 by itan              #+#    #+#             */
/*   Updated: 2022/10/26 23:01:12 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	hexlen(unsigned long n)
{
	size_t	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n > 0)
	{
		n /= 16;
		size++;
	}
	return (size);
}

size_t	ft_printhex(unsigned long n, unsigned char cap)
{
	ft_puthex_fd(n, 1, cap);
	return (hexlen(n));
}
