/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:18:48 by passunca          #+#    #+#             */
/*   Updated: 2024/09/05 11:43:18 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H			
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <math.h>
# include <limits.h>

// #ifndef FT_PRINTF
// # define FT_PRINTF_H
// # include "../ft_printf/ft_printf.h"
// #endif
# include "../get_next_line/get_next_line.h"
# include "../color_codes/ansi.h"
# include "../color_codes/hexa.h"

# define PRECISION	6

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Mandatory Part 1
int		ft_isalpha(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);	
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);		
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
char	ft_tolower(char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);

// Mandatory Part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Bonus Part
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new_node);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// Extra 
int		ft_putnchar_fd(char c, int fd, int n);
int		ft_putstrn_fd(char *str, int fd, int n);
int		ft_numlen(int n, int base);
int		ft_uputnbr(unsigned int n);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_unumlen(unsigned int n, int base);
char	*ft_uitoa(unsigned int n);
char	*ft_xtoa(unsigned long int nb, int is_upper);
int		ft_abs(int n);
int		ft_argb(int alpha, int red, int green, int blue);
int		ft_get_alpha(int argb);
int		ft_get_red(int argb);
int		ft_get_green(int argb);
int		ft_get_blue(int argb);
int		ft_perror(char *str);
int		ft_perror_exit(char *str);
int		ft_pout_color(char *str, char *color);
int		ft_perror_color(char *str, char *color);
int		ft_isspace(char c);
double	ft_atod(char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_stolower(char *c);
void	ft_sep(char bookends, char sep, int len);
void	ft_sep_color(char bookends, char sep, int len, char *color);
char	*ft_dtoa(double d);
double	ft_pow(double base, double exp);
int		ft_atoi_base(const char *str, int str_base);
double	ft_absd(double n);
int		ft_min(int a, int b);
int		ft_max(int a, int b);
long	ft_atol(const char *nptr);
int		ft_issign(char c);
void	ft_free(char *ptr);
char	*ft_strjoin_free(char *s1, char *s2);
void	ft_swapstrs(char **s1, char **s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strtrim_lead(char const *s1, char const *set);
char	*ft_strtrim_trail(char const *s1, char const *set);
int		ft_isnum(char *str);

#endif
