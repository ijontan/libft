/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:54:34 by itan              #+#    #+#             */
/*   Updated: 2022/10/14 13:30:20 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(str);
	while (i <= size)
	{
		if ((char)str[size - i] == (char)c)
			return ((char *)&str[size - i]);
		i++;
	}
	return (0);
}
