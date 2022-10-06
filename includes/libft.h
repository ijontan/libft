/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:46:45 by itan              #+#    #+#             */
/*   Updated: 2022/10/06 15:25:53 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

/* --------------------------------- add_ft --------------------------------- */
char				**ft_split(char *src, char c);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);

/* ------------------------------- conditions ------------------------------- */
int					ft_instr(char c, char const *str);

/* -------------------------------- converts -------------------------------- */
int					ft_atoi(char *str);
char				*ft_itoa(int n);

/* ----------------------------------- is ----------------------------------- */
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);

/* ----------------------------------- lst ---------------------------------- */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

/* ----------------------------------- mem ---------------------------------- */
void				*ft_bzero(void *a, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memchr(void const *str, int c, size_t n);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *a, int b, size_t n);
void				*ft_calloc(size_t count, size_t size);

/* ----------------------------------- put ---------------------------------- */
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);

/* ----------------------------------- str ---------------------------------- */
char				*ft_strcat(char *s1, char *s2);
char				*ft_strchr(const char *str, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(char *str);
size_t				ft_strlcat(char *dst, char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(char const *str);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(char const *str, char const *substr,
						size_t len);
char				*ft_strrchr(const char *str, int c);

/* ----------------------------------- to ----------------------------------- */
char				ft_toupper(char c);
char				ft_tolower(char c);

#endif
