/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:25:12 by itan              #+#    #+#             */
/*   Updated: 2022/09/22 22:16:11 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *str1, char *str2)
{
	char	*dst;
	int		i;

	if (!str1 || !str2)
		return (0);
	dst = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!dst)
		return (0);
	while (*str1)
		dst[i++] = *(str1++);
	while (*str2)
		dst[i++] = *(str2++);
	dst[i] = '\0';
	return (dst);
}
