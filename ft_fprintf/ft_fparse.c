/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:24:58 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 21:51:57 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static void		ft_fprint_arg(t_format *p, char type, va_list ap, int fd);
static int		ft_fparse_flag(const char *str, t_format *p, int i);
void			ft_fparse_width(const char *str, t_format *p, int i);
void			ft_fparse_prec(const char *str, t_format *p, int i);

int	ft_fparse_bonus(const char *str, va_list ap, t_format *p, int fd)
{
	int		i;
	int		speclen;

	i = -1;
	while (str[++i] != '\0')
	{
		ft_fresetformat(p);
		if (str[i] == '%')
		{
			speclen = ft_fparse_flag(str, p, i);
			if (p->specifier)
				i = speclen;
			if (str[i] && (p->specifier > 0) && ft_fisspecif(str[i]))
				ft_fprint_arg(p, str[i], ap, fd);
			else if (str[i] != '\0')
				p->len += ft_putchar_fd(str[i], 1);
		}
		else
			p->len += ft_putchar_fd(str[i], 1);
	}
	return (p->len);
}

static int	ft_fparse_flag(const char *str, t_format *p, int i)
{
	while (str[++i] && ft_fisflag(str[i]))
	{
		if (str[i] == '-')
			*p = ft_fflag_minus(*p);
		else if (str[i] == '#')
			p->sharp = 1;
		else if (str[i] == ' ')
			p->space = 1;
		else if (str[i] == '+')
			p->plus = 1;
		else if (str[i] == '0' && p->minus == 0 && p->width == 0)
			p->zero = 1;
		if (ft_isdigit(str[i]) && !p->width && !p->dot)
			ft_fparse_width(str, p, i);
		if (str[i] == '.')
			ft_fparse_prec(str, p, i);
		if (ft_fisspecif(str[i]))
		{
			p->specifier = str[i];
			break ;
		}
	}
	return (i);
}

static void	ft_fprint_arg(t_format *p, char type, va_list ap, int fd)
{
	if (type == '%')
		p->len += ft_putchar_fd('%', fd);
	else if (type == 'c')
		p->len += ft_fprint_c(va_arg(ap, int), p, fd);
	else if (type == 's')
		p->len += ft_fprint_s(va_arg(ap, const char *), *p, fd);
	else if (type == 'd' || type == 'i')
		p->len += ft_fprint_di(va_arg(ap, int), p, fd);
	else if (type == 'u')
		p->len += ft_fprint_u(va_arg(ap, unsigned int), *p, fd);
	else if (type == 'x')
		p->len += ft_fprint_x(va_arg(ap, unsigned int), 0, *p, fd);
	else if (type == 'X')
		p->len += ft_fprint_x(va_arg(ap, unsigned int), 1, *p, fd);
	else if (type == 'p')
		p->len += ft_fprint_p((unsigned long int)va_arg(ap, void *), *p, fd);
	else if (type == 'f')
		p->len += ft_fprint_f(va_arg(ap, double), p, fd);
}

void	ft_fparse_width(const char *str, t_format *p, int i)
{
	while (str[i] != '.' && !ft_fisspecif(str[i]))
	{
		if (ft_isdigit(str[i]) && !p->width)
			p->width = ft_atoi(str + i);
		++i;
	}
}

void	ft_fparse_prec(const char *str, t_format *p, int i)
{
	p->dot = 1;
	p->zero = 0;
	if (str[i + 1] == '0')
		p->zero = 1;
	p->precision = ft_atoi(&str[i + 1]);
	if (p->dot && (p->precision < 0))
		p->precision = 0;
}
