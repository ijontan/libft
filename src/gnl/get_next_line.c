/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:00:13 by itan              #+#    #+#             */
/*   Updated: 2022/11/10 17:28:08 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static char	*read_line(int fd, char *cache)
{
	char	*buff;
	int		nb;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	nb = 1;
	while (!instr(cache, '\n') && nb)
	{
		nb = read(fd, buff, BUFFER_SIZE);
		if (nb <= 0)
			break ;
		buff[nb] = '\0';
		cache = ft_append(cache, buff);
	}
	free(buff);
	if (nb == -1)
		return (NULL);
	return (cache);
}

static char	**split_line(char *cache)
{
	char	**dest;
	size_t	len;
	size_t	i;

	len = 0;
	if (cache[len])
		len++;
	while (cache[len] && cache[len - 1] != '\n')
		len++;
	dest = (char **)malloc(2 * sizeof(char *));
	dest[0] = malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
		dest[0][i++] = *(cache++);
	dest[0][i] = '\0';
	dest[1] = ft_strdup(cache);
	return (dest);
}

static unsigned char	free_emptycache(char **cache, int fd)
{
	if (!cache[fd])
		return (0);
	if (!cache[fd][0])
	{
		free(cache[fd]);
		cache[fd] = NULL;
		return (0);
	}
	return (1);
}

char	*get_next_line(int fd)
{
	static char	*cache[1024];
	char		*dest;
	char		**lines;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0)
		return (NULL);
	cache[fd] = read_line(fd, cache[fd]);
	if (!free_emptycache(cache, fd))
		return (NULL);
	lines = split_line(cache[fd]);
	free(cache[fd]);
	dest = lines[0];
	cache[fd] = lines[1];
	free(lines);
	return (dest);
}
