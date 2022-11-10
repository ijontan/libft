/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flagdata_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:11:58 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 15:43:40 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_flagdata_init(t_flagdata *data)
{
	data->tail = 0;
	data->head = 0;
	data->zerof = 0;
	data->preci = 0;
	data->prefix = 0;
	data->sign = 0;
	data->space = 0;
}
