/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchrs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:40:23 by itan              #+#    #+#             */
/*   Updated: 2022/10/26 20:42:31 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_printchrs(char c, int size)
{
	int	i;

	if (size <= 0)
		return (0);
	i = 0;
	while (i++ < size)
		ft_putchar_fd(c, 1);
	return (size);
}
