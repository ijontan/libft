/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_void.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:29:34 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:44:34 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	h_head_point(size_t *size, size_t nlen, t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->head - data->preci);
	else
		*size += ft_printchrs(' ', data->head - nlen);
	if (data->preci && data->preci != -1)
	{
		if (data->preci > (int)nlen)
			*size += ft_printchrs(' ', data->zerof - data->preci);
		if (data->preci < (int)nlen)
			*size += ft_printchrs(' ', data->zerof - nlen);
	}
}

static void	h_tail_point(size_t *size, unsigned long value, size_t nlen,
		t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->tail - data->preci);
	else if (data->preci == -1 && value == 0)
		*size += ft_printchrs(' ', data->tail);
	else
		*size += ft_printchrs(' ', data->tail - nlen);
}

size_t	ft_h_void(va_list args, t_flagdata *data)
{
	void	*pointer;
	size_t	size;
	size_t	nlen;

	pointer = va_arg(args, void *);
	size = 0;
	nlen = hexlen((unsigned long)pointer) + 2;
	h_head_point(&size, nlen, data);
	size += ft_printstr("0x");
	size += ft_printhex((unsigned long)pointer, 0);
	h_tail_point(&size, (unsigned long)pointer, nlen, data);
	return (size);
}
