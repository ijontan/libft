/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:05:59 by itan              #+#    #+#             */
/*   Updated: 2022/10/21 16:11:34 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_hash(const char *key)
{
	unsigned long	value;
	size_t			i;
	size_t			key_len;

	value = 0;
	i = 0;
	key_len = ft_strlen(key);
	while (i < key_len)
		value = value * 37 * key[i++];
	value %= TABLE_SIZE;
	return (value);
}
