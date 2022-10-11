/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 23:08:05 by itan              #+#    #+#             */
/*   Updated: 2022/10/12 03:14:21 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i])
	{
		if (i >= n - 1)
			return (0);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
