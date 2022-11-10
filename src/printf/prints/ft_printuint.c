/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:21:54 by itan              #+#    #+#             */
/*   Updated: 2022/10/27 15:25:51 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putuint_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putuint_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

size_t	unintsize(unsigned int n)
{
	size_t	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

size_t	ft_printuint(unsigned int n)
{
	ft_putuint_fd(n, 1);
	return (unintsize(n));
}
