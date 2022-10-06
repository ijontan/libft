/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:55:16 by itan              #+#    #+#             */
/*   Updated: 2022/10/06 15:24:15 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**n_lst;
	t_list	*n_element;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = 0;
	n_lst = &tmp;
	while (lst)
	{
		n_element = ft_lstnew(f(lst->content));
		if (!n_element)
		{
			ft_lstclear(n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, n_element);
		lst = lst->next;
		tmp = tmp->next;
	}
	return (*n_lst);
}
