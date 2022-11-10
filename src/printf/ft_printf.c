/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:43:21 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:43:26 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	char	*tmp;
	int		size;

	size = 0;
	tmp = (char *)s;
	va_start(args, s);
	while (*tmp)
	{
		while (*tmp && *tmp != '%')
		{
			ft_putchar_fd(*(tmp++), 1);
			size++;
		}
		if (*tmp == '%')
			tmp = ft_formating(tmp, args, &size);
	}
	va_end(args);
	return (size);
}
