/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formating.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:33:46 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 16:07:04 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	format_conditions(char **s, t_flagdata *data)
{
	while (**s && ft_strchr(" +#", **s))
	{
		if (**s == ' ')
			data->space = 1;
		if (**s == '+')
			data->sign = 1;
		if (**s == '#')
			data->prefix = 1;
		(*s)++;
	}
}

static void	format_paddings(char **s, t_flagdata *data)
{
	while ((**s && ft_strchr(" .-", **s)) || ft_isdigit(**s))
	{
		while (**s == ' ')
			(*s)++;
		if (ft_isdigit(**s) && **s != '0')
			data->head = ft_atoi(*s);
		if (**s == '0')
			data->zerof = ft_atoi(*s);
		if (**s == '.')
		{
			data->preci = ft_atoi(*s + 1);
			if (ft_atoi(*s + 1) == 0)
				data->preci = -1;
		}
		if (**s == '-')
			data->tail = ft_atoi(*s + 1);
		(*s)++;
		while (ft_isdigit(**s))
			(*s)++;
	}
}

static char	*format_flags(char *s, t_flagdata *data)
{
	ft_flagdata_init(data);
	format_conditions(&s, data);
	format_paddings(&s, data);
	return (s);
}

char	*ft_formating(char *s, va_list args, int *size)
{
	t_flagdata	data;
	char		*check;

	check = format_flags(++s, &data);
	if (*check == 'c')
		*size += ft_h_char(args, &data);
	else if (*check == 's')
		*size += ft_h_str(args, &data);
	else if (*check == 'p')
		*size += ft_h_void(args, &data);
	else if (*check == 'd' || *check == 'i')
		*size += ft_h_int(args, &data);
	else if (*check == 'u')
		*size += ft_h_uint(args, &data);
	else if (*check == 'x' || *check == 'X')
		*size += ft_h_hex(check, args, &data);
	else if (*check == '%')
		*size += ft_h_percent();
	else
		*size += ft_h_nosym(--s, check);
	return (++check);
}
