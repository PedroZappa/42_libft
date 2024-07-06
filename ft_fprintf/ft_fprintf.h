/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:41:49 by passunca          #+#    #+#             */
/*   Updated: 2024/02/29 12:54:02 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FPRINTF_H
# define FT_FPRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

/* Constants */
# define FLAGS		"0# +-"
# define HEX_LOWER	"0123456789abcdef"
# define HEX_UPPER	"0123456789ABCDEF"

/* Struct to track format parameters */
#ifndef FT_FORMAT
# define FT_FORMAT

typedef struct s_format
{
	int		len;
	int		neg;
	char	specifier;
	char	flag;
	int		minus;
	int		plus;
	int		width;
	int		precision;
	int		zero;
	int		dot;
	int		space;
	int		sharp;
}	t_format;

#endif

typedef struct s_hexa_meta
{
	int	is_upper;
	int	n;
}	t_hexa_meta;

/* Function Prototypes */
/* Formats and prints input 'format' data */
int			ft_fprintf(int fd, const char *format, ...);
/* Initializes a t_format struct with all members set to 0 */
t_format	ft_newformat(void);
void		ft_resetformat(t_format *prsd);
/* Parsing */
int			ft_parse(char *str, va_list ap);
int			ft_parse_bonus(const char *str, va_list ap, t_format *p, int fd);
/* Check & Convert */
int			ft_isflag(int c);
int			ft_isspecif(int c);
int			ft_isflag(int c);
int			ft_isflagtype(int c);
t_format	ft_flag_minus(t_format prsd);
int			ft_pad_width(int total_width, int size, int zero, int fd);
char		*ft_xtoa(unsigned long int nb, int isupper);
/* Printing */
int			ft_print_specifier(const char *format, t_format prsd, va_list ap,
				int fd);
int			ft_print_c(char c, t_format *prsd, int fd);
int			ft_print_s(const char *str, t_format prsd, int fd);
int			ft_print_str(const char *str, int fd);
int			ft_print_di(int n, t_format *p, int fd);
int			ft_print_f(double n, t_format *p, int fd);
int			ft_print_u(unsigned n, t_format prsd, int fd);
int			ft_print_p(unsigned long int n, t_format prsd, int fd);
int			ft_print_hex(t_format prsd, va_list ap, int fd);
int			ft_print_x(size_t n, int isupper, t_format p, int fd);
int			ft_flags(t_format prsd, int nbr);

#endif
