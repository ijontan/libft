/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:22:10 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 16:23:17 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_instr(char c, char *str)
{
	while (*str)
		if (c == *(str++))
			return (1);
	return (0);
}
