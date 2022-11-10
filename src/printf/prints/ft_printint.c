/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:43:09 by itan              #+#    #+#             */
/*   Updated: 2022/10/27 18:38:25 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numsize(int n)
{
	size_t	size;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (10);
	size = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

size_t	ft_printint(int n)
{
	ft_putnbr_fd(n, 1);
	return (numsize(n));
}
