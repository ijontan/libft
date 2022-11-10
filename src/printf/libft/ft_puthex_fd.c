/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:36:42 by itan              #+#    #+#             */
/*   Updated: 2022/10/24 15:13:02 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puthex_fd(unsigned long n, int fd, unsigned char cap)
{
	if (n >= 16)
		ft_puthex_fd(n / 16, fd, cap);
	if (cap)
		ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
	else
		ft_putchar_fd("0123456789abcdef"[n % 16], fd);
}
