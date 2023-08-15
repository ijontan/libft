/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:38:25 by itan              #+#    #+#             */
/*   Updated: 2023/08/16 00:43:40 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append(char *str1, const char *str2)
{
	char	*dst;

	if (!str1 && !str2)
		return (0);
	if (!str1)
		return (ft_strdup((char *)str2));
	if (!str2)
		return (str1);
	dst = ft_strjoin(str1, str2);
	free(str1);
	return (dst);
}
