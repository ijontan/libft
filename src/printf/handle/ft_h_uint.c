/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_uint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:07:20 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:44:30 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	h_head_uint(size_t *size, unsigned int value, size_t nlen,
		t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->head - data->preci);
	else
		*size += ft_printchrs(' ', data->head - nlen);
	if (data->preci == -1 && value == 0)
		*size += ft_printchrs(' ', data->zerof);
	else if (data->preci)
	{
		if (data->preci > (int)nlen)
			*size += ft_printchrs(' ', data->zerof - data->preci);
		if (data->preci < (int)nlen)
			*size += ft_printchrs(' ', data->zerof - nlen);
	}
}

static void	h_preci_uint(size_t *size, size_t nlen, t_flagdata *data)
{
	if (!data->preci)
		*size += ft_printchrs('0', data->zerof - nlen);
	*size += ft_printchrs('0', data->preci - nlen);
}

static void	h_tail_uint(size_t *size, unsigned int value, size_t nlen,
		t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->tail - data->preci);
	else if (data->preci == -1 && value == 0)
		*size += ft_printchrs(' ', data->tail);
	else
		*size += ft_printchrs(' ', data->tail - nlen);
}

size_t	ft_h_uint(va_list args, t_flagdata *data)
{
	unsigned int	value;
	size_t			size;
	size_t			nlen;

	value = va_arg(args, unsigned int);
	size = 0;
	nlen = unintsize(value);
	h_head_uint(&size, value, nlen, data);
	h_preci_uint(&size, nlen, data);
	if (data->preci != -1 || value != 0)
		size += ft_printuint(value);
	h_tail_uint(&size, value, nlen, data);
	return (size);
}
