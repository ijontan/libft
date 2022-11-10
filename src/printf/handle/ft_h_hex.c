/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_hex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:46:32 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:44:14 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	h_head_hex(size_t *size, unsigned int value, size_t nlen,
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

static void	h_preci_hex(size_t *size, size_t nlen, t_flagdata *data)
{
	if (!data->preci)
		*size += ft_printchrs('0', data->zerof - nlen);
	*size += ft_printchrs('0', data->preci - nlen);
}

static void	h_tail_hex(size_t *size, unsigned int value, size_t nlen,
		t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->tail - data->preci);
	else if (data->preci == -1 && value == 0)
		*size += ft_printchrs(' ', data->tail);
	else
		*size += ft_printchrs(' ', data->tail - nlen);
}

size_t	ft_h_hex(char *check, va_list args, t_flagdata *data)
{
	unsigned int	value;
	size_t			size;
	size_t			nlen;

	size = 0;
	value = va_arg(args, unsigned int);
	nlen = hexlen(value);
	h_head_hex(&size, value, nlen, data);
	if (data->prefix && value)
	{
		if (*check == 'X')
			size += ft_printstr("0X");
		else
			size += ft_printstr("0x");
	}
	h_preci_hex(&size, nlen, data);
	if (data->preci != -1 || value != 0)
		size += ft_printhex(value, *check == 'X');
	h_tail_hex(&size, value, nlen, data);
	return (size);
}
