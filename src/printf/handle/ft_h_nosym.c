/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_nosym.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:14:16 by itan              #+#    #+#             */
/*   Updated: 2022/10/26 21:16:52 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_h_nosym(char *s, char *check)
{
	size_t	size;

	size = 0;
	while (s[size] && &s[size] != check)
		ft_putchar_fd(s[size++], 1);
	if (s[size])
		ft_putchar_fd(s[size++], 1);
	return (size);
}
