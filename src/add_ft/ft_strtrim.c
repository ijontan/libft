/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:30:09 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 16:05:41 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_trim_size(const char *s1, const char *set)
{
	size_t	len;

	len = ft_strlen((char *)s1) - 1;
	while (ft_strchr(set, s1[len]))
		len--;
	return (len + 2);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	char	*dst;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1))
		s1++;
	if (!*s1)
		return (ft_strdup(""));
	size = get_trim_size(s1, set);
	dst = (char *)malloc(size * sizeof(char));
	if (dst == 0)
		return (0);
	ft_strlcpy(dst, s1, size);
	return (dst);
}
