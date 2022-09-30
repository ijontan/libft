/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:46:45 by itan              #+#    #+#             */
/*   Updated: 2022/09/30 19:24:12 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
/* ----------------------------------- mem ---------------------------------- */
void	*ft_bzero(void *a, size_t n);
void	*ft_mencpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *a, int b, size_t n);

/* ----------------------------------- str ---------------------------------- */
char	*ft_strcat(char *s1, char *s2);
char	*ft_strchr(const char *str, char c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(char *str);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *str1, char *str2);
size_t	ft_strlcat(char *dst, char *src, size_t fsize);

/* ----------------------------------- to ----------------------------------- */
char	ft_toupper(char c);
char	ft_tolower(char c);

#endif
