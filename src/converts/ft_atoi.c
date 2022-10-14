/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:19:48 by itan              #+#    #+#             */
/*   Updated: 2022/10/13 18:16:42 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	neg;

	result = 0;
	neg = 1;
	while (ft_instr(*str, " \n\t\v\f\r"))
		str++;
	if (ft_instr(*str, "+-"))
		if (*(str++) == '-')
			neg = -1;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + *(str++) - '0';
	return (result * neg);
}
