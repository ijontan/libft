/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:32:53 by itan              #+#    #+#             */
/*   Updated: 2023/03/18 01:06:55 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dont ask me how it works,
// I found this online and I have no idea how it works at all
// even chatgpt says it's magic
float	ft_q_in_sqrt(float number)
{
	long	i;
	float	threehalfs;
	float	x2;
	float	y;

	threehalfs = 1.5F;
	x2 = number * 0.5F;
	y = number;
	i = *(long *)&number;
	i = 0x5f3759df - (i >> 1);
	y = *(float *)&i;
	y = y * (threehalfs - (x2 * y * y));
	y = y * (threehalfs - (x2 * y * y));
	return (y);
}

float	ft_sqrt(float number)
{
	return (1 / ft_q_in_sqrt(number));
}
