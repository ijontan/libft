/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:20:35 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:44:04 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	h_head_int(size_t *size, int value, size_t nlen, t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->head - data->preci - (value < 0));
	else
		*size += ft_printchrs(' ', data->head - nlen - (value < 0));
	if (value != 0 && data->preci && data->preci != -1)
	{
		if (data->preci > (int)nlen)
			*size += ft_printchrs(' ', data->zerof - data->preci - (value < 0));
		if (data->preci < (int)nlen)
			*size += ft_printchrs(' ', data->zerof - nlen - (value < 0));
	}
}

static void	h_preci_int(size_t *size, int value, size_t nlen, t_flagdata *data)
{
	if (!data->preci)
		*size += ft_printchrs('0', data->zerof - nlen - (value < 0));
	*size += ft_printchrs('0', data->preci - nlen);
}

static void	h_tail_int(size_t *size, int value, size_t nlen, t_flagdata *data)
{
	if (data->preci > (int)nlen)
		*size += ft_printchrs(' ', data->tail - data->preci - (value < 0));
	else if (data->preci == -1 && value == 0)
		*size += ft_printchrs(' ', data->tail);
	else
		*size += ft_printchrs(' ', data->tail - nlen - (value < 0));
}

size_t	ft_h_int(va_list args, t_flagdata *data)
{
	int		value;
	size_t	size;
	size_t	nlen;

	value = va_arg(args, int);
	size = 0;
	nlen = numsize(value);
	h_head_int(&size, value, nlen, data);
	if (data->space && !data->sign && value >= 0)
		size += ft_printchrs(' ', 1);
	if (value < 0)
		size += ft_printchrs('-', 1);
	if (value >= 0 && data->sign)
		size += ft_printchrs('+', 1);
	h_preci_int(&size, value, nlen, data);
	if (value < 0)
		size += ft_printuint(-value);
	else if (!(data->preci == -1 && value == 0))
		size += ft_printuint(value);
	else
		size += ft_printchrs(' ', data->zerof);
	h_tail_int(&size, value, nlen, data);
	return (size);
}
