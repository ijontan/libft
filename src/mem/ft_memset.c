/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:13:41 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 16:18:11 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)a)[i] = (unsigned char)b;
		i++;
	}
	return (a);
}
