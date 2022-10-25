/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:46:42 by itan              #+#    #+#             */
/*   Updated: 2022/10/21 16:51:36 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_ht_get(t_ht hashtable, const char *key)
{
	size_t	slot;
	t_entry	*entry;

	slot = ft_hash(key);
	entry = hashtable.entries[slot];
	while (entry)
	{
		if (ft_strcmp(entry->key, key))
			return (entry->value);
		entry = entry->next;
	}
	return (NULL);
}
