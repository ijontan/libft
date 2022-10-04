/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:26 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 17:07:50 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	char	*dst;

	dst = (char *)malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!dst)
		return (0);
	ft_memcpy(dst, str, ft_strlen(str) + 1);
	return (dst);
}
