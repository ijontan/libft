/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:26 by itan              #+#    #+#             */
/*   Updated: 2022/09/22 22:15:53 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// TODO not finished
char	*ft_strdup(char *str)
{
	char	*dst;

	if (!(dst = (char *)malloc((ft_strlen(str) + 1) * sizeof(char))))
		return (0);
	ft_mencpy(dst, str, ft_strlen(str) + 1);
	return (dst);
}
