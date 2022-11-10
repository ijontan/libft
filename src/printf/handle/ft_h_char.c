/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:03:09 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:43:56 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_h_char(va_list args, t_flagdata *data)
{
	char	c;
	size_t	size;

	size = 0;
	if ((data->head || data->zerof) && data->tail)
		return (0);
	size += ft_printchrs(' ', data->head + data->zerof - 1);
	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
	size++;
	size += ft_printchrs(' ', data->tail - 1);
	return (size);
}
