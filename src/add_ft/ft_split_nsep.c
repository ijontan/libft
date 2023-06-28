/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_nsep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:22:47 by itan              #+#    #+#             */
/*   Updated: 2023/06/28 16:37:07 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char	*ft_strcmpn(char *str, char **seps)
{
	int	i;

	i = 0;
	while (seps && seps[i])
	{
		if (ft_strncmp(str, seps[i], ft_strlen(seps[i])) == 0)
			return (seps[i]);
		i++;
	}
	return (0);
}

static char	**recurse(char *str, char **seps, int dept)
{
	char	**dst;
	char	*cache;
	int		i;

	is_quoted = 0;
	while (*str && ft_strcmpn(str, seps))
		str += ft_strlen(ft_strcmpn(str, seps));
	i = 0;
	while (str[i] && !ft_strcmpn(str + i, seps))
		i++;
	cache = ft_substr(str, 0, i);
	while (str[i] && ft_strcmpn(str + i, seps))
		i += ft_strlen(ft_strcmpn(str + i, seps));
	if (!str[i])
		dst = (char **)ft_calloc(dept + 2, sizeof(char *));
	else
		dst = recurse(str + i, seps, dept + 1);
	dst[dept] = cache;
	return (dst);
}

char	**ft_split_nsep(char *str, char **seps)
{
	return (recurse(str, seps, 0));
}
