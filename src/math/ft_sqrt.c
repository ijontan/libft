/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 01:32:53 by itan              #+#    #+#             */
/*   Updated: 2023/10/25 02:31:08 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// dont ask me how it works,
// I found this online and I have no idea how it works at all
// even chatgpt says it's magic
float	ft_q_in_sqrt(float number)
{
	long	i;
	float	x2;

	x2 = number * 0.5F;
	i = *(long *)&number;
	i = 0x5f3759df - (i >> 1);
	number = *(float *)&i;
	number = number * (1.5F - (x2 * number * number));
	number = number * (1.5F - (x2 * number * number));
	return (number);
}

float	ft_sqrt(float number)
{
	return (1 / ft_q_in_sqrt(number));
}
