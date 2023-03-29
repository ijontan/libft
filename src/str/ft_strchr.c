/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:30:17 by itan              #+#    #+#             */
/*   Updated: 2023/03/29 16:42:34 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str)
		if ((char)*(str++) == (char)c)
			return ((char *)(str - 1));
	if ((char)*(str) == (char)c)
		return ((char *)(str));
	return (0);
}
