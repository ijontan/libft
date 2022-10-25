/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ht_pair.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:35:31 by itan              #+#    #+#             */
/*   Updated: 2022/10/21 16:39:56 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_entry	*ft_ht_pair(const char *key, const void *value)
{
	t_entry	*entry;

	entry = ft_calloc(1, sizeof(t_entry));
	entry->key = ft_calloc(ft_strlen(key) + 1, sizeof(char));
	entry->value = ft_calloc(ft_strlen((char *)value), 1);
	entry->next = NULL;
	return (entry);
}
