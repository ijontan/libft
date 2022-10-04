/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:46:45 by itan              #+#    #+#             */
/*   Updated: 2022/10/04 23:56:11 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

/* --------------------------------- add_ft --------------------------------- */
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/* ------------------------------- conditions ------------------------------- */
int		ft_instr(char c, char const *str);

/* -------------------------------- converts -------------------------------- */
int		ft_atoi(char *str);

/* ----------------------------------- is ----------------------------------- */
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

/* ----------------------------------- mem ---------------------------------- */
void	*ft_bzero(void *a, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(void const *str, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *a, int b, size_t n);
void	*ft_calloc(size_t count, size_t size);

/* ----------------------------------- str ---------------------------------- */
char	*ft_strcat(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(char *str);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char const *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(char const *str, char const *substr, size_t len);
char	*ft_strrchr(const char *str, int c);

/* ----------------------------------- to ----------------------------------- */
char	ft_toupper(char c);
char	ft_tolower(char c);

#endif
