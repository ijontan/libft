/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:57:34 by itan              #+#    #+#             */
/*   Updated: 2022/11/21 18:01:05 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

char	*instr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str)
		if ((char)*(str++) == (char)c)
			return ((char *)(str - 1));
	return (0);
}

char	*ft_append(char *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		len1;

	i = 0;
	if (!s2)
		return (0);
	if (!s1)
		return (ft_strdup((char *)s2));
	len1 = ft_strlen((char *)s1);
	dst = (char *)malloc(len1 + ft_strlen((char *)s2) + 1);
	if (!dst)
		return (0);
	while (*s1)
		dst[i++] = *(s1++);
	while (*s2)
		dst[i++] = *(s2++);
	dst[i] = '\0';
	free(s1 - len1);
	return (dst);
}
