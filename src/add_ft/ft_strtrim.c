/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:30:09 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 22:30:09 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_trim_size(char const *s1, char const *set)
{
	size_t	len;

	len = ft_strlen((char *)s1);
	while (1)
		if (!ft_instr(s1[len], set))
			return (len);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*dst;

	while (ft_instr(*s1, set))
		s1++;
	if (!*s1)
		return (ft_strdup(""));
	size = get_trim_size(s1, set);
	dst = (char *)malloc(size * sizeof(char));
	if (dst == 0)
		return (0);
	return (ft_strcpy(dst, s1));
}
