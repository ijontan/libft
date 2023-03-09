/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:25:24 by itan              #+#    #+#             */
/*   Updated: 2023/03/10 03:43:24 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_cos(double rad)
{
	return (ft_sin(rad - PI / 2.0));
}

double	ft_acos(double val)
{
	return (2 * ft_atan(1) - ft_asin(val));
}
