/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:25:55 by itan              #+#    #+#             */
/*   Updated: 2023/09/29 18:07:34 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_item)
{
	if (!new_item)
		return ;
	if (!*lst)
	{
		*lst = new_item;
		return ;
	}
	new_item->next = *lst;
	(*lst)->prev = new_item;
	*lst = new_item;
}
