/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:29:38 by itan              #+#    #+#             */
/*   Updated: 2022/10/21 16:45:53 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ht_set(t_ht *hashtable, const char *key, const void *value)
{
	size_t	slot;
	t_entry	*entry;
	t_entry	*prev;

	slot = ft_hash(key);
	entry = hashtable->entries[slot];
	if (entry == NULL)
		hashtable->entries[slot] = ft_ht_pair(key, value);
	while (entry)
	{
		if (!ft_strcmp(entry->key, key))
		{
			free(entry->value);
			entry->value = (void *)ft_strdup((char *)value);
			return ;
		}
		prev = entry;
		entry = prev->next;
	}
	prev->next = ft_ht_pair(key, value);
}
