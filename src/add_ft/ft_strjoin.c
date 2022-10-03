/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:25:12 by itan              #+#    #+#             */
/*   Updated: 2022/10/03 17:40:39 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	dst = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!dst)
		return (0);
	while (*s1)
		dst[i++] = *(s1++);
	while (*s2)
		dst[i++] = *(s2++);
	dst[i] = '\0';
	return (dst);
}
