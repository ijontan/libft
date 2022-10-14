/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:54:56 by itan              #+#    #+#             */
/*   Updated: 2022/10/14 13:16:11 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char *src, char c)
{
	size_t	n_word;

	n_word = 0;
	while (*src)
	{
		while (*src && *src == c)
			src++;
		if (*src)
			n_word++;
		while (*src && *src != c)
			src++;
	}
	return (n_word);
}

char	*new_str(const char *src_i, char c)
{
	size_t	i;
	char	*dst;

	i = 0;
	while (src_i[i] && src_i[i] != c)
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!dst)
		return (0);
	i = 0;
	while (*src_i && *src_i != c)
		dst[i++] = *(src_i++);
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(const char *src, char c)
{
	char	**dst;
	char	*buffer;
	size_t	i;

	i = 0;
	buffer = (char *)src;
	if (!buffer)
		return (0);
	dst = (char **)malloc(sizeof(char *) * (ft_wordcount(buffer, c) + 1));
	if (!dst)
		return (0);
	while (*buffer)
	{
		while (*buffer && *buffer == c)
			buffer++;
		if (*buffer)
			dst[i++] = new_str(buffer, c);
		while (*buffer && *buffer != c)
			buffer++;
	}
	dst[i] = 0;
	return (dst);
}
