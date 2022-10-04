/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:35:06 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 23:51:39 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *substr, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*substr)
		return ((char *)str);
	i = 0;
	while (str[i] || i < len)
	{
		j = 0;
		while (str[i + j] == substr[j] && substr[j] && i + j < len)
			j++;
		if (!substr[j])
			return (&((char *)str)[i]);
		i++;
	}
	return (0);
}
