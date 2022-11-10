/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:20:43 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:44:24 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	printlstr(char *str, size_t len)
{
	size_t	size;

	size = 0;
	while (str[size] && size < len)
		write(1, &str[size++], 1);
	return (size);
}

size_t	ft_h_str(va_list args, t_flagdata *data)
{
	char	*str;
	size_t	size;
	size_t	nlen;

	size = 0;
	str = va_arg(args, char *);
	nlen = 6;
	if (str)
		nlen = ft_strlen(str);
	if (data->preci && data->preci < (int)nlen)
		nlen = data->preci;
	if (data->preci == -1)
		nlen = 0;
	if ((data->head || data->zerof) && !data->tail)
		size += ft_printchrs(' ', data->head + data->zerof - nlen);
	if (str && data->preci > 0)
		size += printlstr(str, data->preci);
	else if (str && data->preci != -1)
		size += ft_printstr(str);
	else if (data->preci > 0)
		size += printlstr("(null)", data->preci);
	else if (data->preci == 0)
		size += ft_printstr("(null)");
	size += ft_printchrs(' ', data->tail - nlen);
	return (size);
}
