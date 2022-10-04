/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:08:00 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 18:16:07 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	char	*buffer;
	size_t	i;

	i = 0;
	buffer = (char *)str;
	while (i < n)
		if ((unsigned char)buffer[i++] == (unsigned char)c)
			return (buffer + i - 1);
	return (0);
}
