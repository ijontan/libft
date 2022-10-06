/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:10:45 by itan              #+#    #+#             */
/*   Updated: 2022/10/05 18:37:05 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_n_digit(int n)
{
	int	i;

	i = 0;
	n *= -1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*dst;
	int		i;
	int		is_neg;

	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	i = get_n_digit(n) + is_neg;
	n *= -1;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	dst[i] = '\0';
	while (--i > 0)
	{
		dst[i] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		dst[0] = '-';
	return (dst);
}
