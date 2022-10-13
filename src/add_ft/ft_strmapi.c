/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:03:01 by itan              #+#    #+#             */
/*   Updated: 2022/10/12 16:33:04 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * (size + 1));
	if (!dst)
		return (0);
	while (i < size)
	{
		dst[i] = f(i, (char)s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
