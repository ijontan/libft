/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:32:47 by itan              #+#    #+#             */
/*   Updated: 2022/10/14 12:00:59 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size stands for final size */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if ((!dst || !src) && size == 0)
		return (0);
	i = ft_strlen(dst);
	if (size < i)
		return (size + ft_strlen(src));
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
