/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itan <itan@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:46:45 by itan              #+#    #+#             */
/*   Updated: 2023/09/29 18:07:54 by itan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "ft_printf.h"
# include "get_next_line.h"
# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

/* --------------------------------- add_ft --------------------------------- */
char				*ft_append(char *str1, const char *str2);
char				**ft_split_nsep(char *str, char **seps);
char				**ft_split(const char *src, char c);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s1, char const *set);

/* ------------------------------ bazier curve ------------------------------ */
typedef struct s_bezier_vars
{
	double			t2;
	double			t3;
	double			mt;
	double			mt2;
	double			mt3;
}					t_bezier_vars;

double				bazier_curves_1d_cubic(double t, double points[4]);
double				bazier_curves_1d_quadratic(double t, double points[3]);
double				bazier_curves_1d_linear(double t, double points[2]);

/* -------------------------------- converts -------------------------------- */
int					ft_atoi(const char *str);
char				*ft_itoa(int n);

/* ------------------------- fast fourier transform ------------------------- */
typedef struct s_cplx
{
	double			r;
	double			i;
}					t_cplx;

/* -------------------------------- hashtable ------------------------------- */
# ifndef TABLE_SIZE
#  define TABLE_SIZE 100000
# endif

typedef struct s_entry
{
	char			*key;
	void			*value;
	struct s_entry	*next;
}					t_entry;

typedef struct s_ht
{
	t_entry			**entries;
}					t_ht;

unsigned int		ft_hash(const char *key);
t_ht				*ft_ht_create(void);
t_entry				*ft_ht_pair(const char *key, const void *value);

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
	struct s_list	*prev;
}					t_list;

void				ft_lstadd_back(t_list **lst, t_list *new_item);
void				ft_lstadd_front(t_list **lst, t_list *new_item);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);

/* ---------------------------------- math ---------------------------------- */
# ifndef PI
#  define PI 3.14159265359
# endif
# ifndef PI_4
#  define PI_4 0.78539816339
# endif
# ifndef PI_2
#  define PI_2 1.57079632679
# endif

double				ft_abs(double val);
long				ft_factorial(long num);
double				ft_power(double num, int power);
double				ft_copysign(double to, double from);
double				ft_sin(double rad);
double				ft_asin(double val);
double				ft_cos(double rad);
double				ft_acos(double val);
double				ft_tan(double rad);
double				ft_atan(double val);
double				ft_atan2(double y, double x);
float				ft_q_in_sqrt(float number);
float				ft_sqrt(float number);

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
void				ft_puthex_fd(unsigned long n, int fd, unsigned char cap);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);

/* ----------------------------------- str ---------------------------------- */
char				*ft_strcat(char *s1, char *s2);
char				*ft_strchr(const char *str, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(char *str);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(char const *str);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(char const *str, char const *substr,
						size_t len);
char				*ft_strrchr(const char *str, int c);

/* ------------------------------- quaternion ------------------------------- */

// credit to https://github.com/MartinWeigel/Quaternion
typedef struct s_quaternion
{
	double			w;
	double			v[3];
}					t_quaternion;

# ifndef QUATERNION_EPS
#  define QUATERNION_EPS (1e-4)
# endif

void				quaternion_from_axis_angle(double axis[3], double angle,
						t_quaternion *output);
double				quaternion_to_axis_angle(t_quaternion *q, double output[3]);
void				quaternion_x_rotation(double angle, t_quaternion *output);
void				quaternion_y_rotation(double angle, t_quaternion *output);
void				quaternion_z_rotation(double angle, t_quaternion *output);

typedef struct s_e_convert_var
{
	double			cy;
	double			sy;
	double			cr;
	double			sr;
	double			cp;
	double			sp;
}					t_e_convert_var;

void				quaternion_from_euler3(double euler[3],
						t_quaternion *output);
void				quaternion_to_euler3(t_quaternion *q, double output[3]);
void				quaternion_conjugate(t_quaternion *q, t_quaternion *output);

t_quaternion		quaternion_create(double w, double v0, double v1,
						double v2);
t_quaternion		quaternion_create_id(void);
t_quaternion		quaternion_dup(t_quaternion *q);
bool				quaternion_equal(t_quaternion *q1, t_quaternion *q2);
double				quaternion_norm(t_quaternion *q);
void				quaternion_normalize(t_quaternion *q, t_quaternion *output);
void				quaternion_multiply(t_quaternion *q1, t_quaternion *q2,
						t_quaternion *output);

typedef struct s_q_rot_var
{
	double			ww;
	double			xx;
	double			yy;
	double			zz;
	double			wx;
	double			wy;
	double			wz;
	double			xy;
	double			xz;
	double			yz;
}					t_q_rot_var;

void				quaternion_rotate(t_quaternion *q, double v[3],
						double output[3]);

typedef struct s_q_slerp_var
{
	double			cos_half_theta;
	double			half_theta;
	double			sin_half_theta;
	double			ratio_a;
	double			ratio_b;
	t_quaternion	*q1;
	t_quaternion	*q2;
}					t_q_slerp_var;

void				quaternion_slerp(t_quaternion *q1, t_quaternion *q2,
						double t, t_quaternion *output);

/* ----------------------------------- to ----------------------------------- */
int					ft_toupper(int c);
int					ft_tolower(int c);

#endif
