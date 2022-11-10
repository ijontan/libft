/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:21:37 by itan              #+#    #+#             */
/*   Updated: 2022/10/21 16:28:17 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ht	*ft_ht_create(void)
{
	t_ht	*hashtable;
	size_t	i;

	hashtable = ft_calloc(1, sizeof(t_ht));
	hashtable->entries = ft_calloc(TABLE_SIZE, sizeof(t_entry *));
	i = 0;
	while (i < TABLE_SIZE)
		hashtable->entries[i] = NULL;
	return (hashtable);
}
