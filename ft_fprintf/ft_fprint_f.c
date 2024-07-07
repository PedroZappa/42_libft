/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:37:52 by passunca          #+#    #+#             */
/*   Updated: 2024/02/29 12:53:35 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int		ft_fprint_sign_precision(int n, t_format *p, int fd);
static int		ft_fprint_double(char *numstr, int n, t_format *p, int fd);
static int		ft_fprint_i(char *nbrstr, int n, t_format *p, int fd);

int	ft_fprint_f(double n, t_format *p, int fd)
{
	char		*numstr;
	double		nbr;
	int			count;

	nbr = (double)n;
	count = 0;
	if (nbr < 0)
	{
		p->neg = 1;
		if (nbr == -2147483648)
			return (ft_putstr_fd("-2147483648", fd));
		nbr = -nbr;
	}
	if (p->precision == 0 && n == 0)
	{
		count += ft_fpad_width(p->width, 0, 0, fd);
		return (count);
	}
	numstr = ft_dtoa(nbr);
	if (!numstr)
		return (0);
	count += ft_fprint_double(numstr, n, p, fd);
	free(numstr);
	return (count);
}

static int	ft_fprint_double(char *numstr, int n, t_format *p, int fd)
{
	int		count;

	count = 0;
	if ((p->neg || p->plus || p->space) && !p->zero)
		--p->width;
	if (p->zero)
		count += ft_fprint_sign_precision(n, p, fd);
	if (p->minus)
		count += ft_fprint_i(numstr, n, p, fd);
	if ((p->precision >= 0) && ((size_t)p->precision < ft_strlen(numstr)))
		p->precision = ft_strlen(numstr);
	if (p->precision >= 0)
	{
		p->width -= p->precision;
		count += ft_fpad_width(p->width, 0, 0, fd);
	}
	else
		count += ft_fpad_width((p->width - p->plus - p->space),
				ft_strlen(numstr), p->zero, fd);
	if (!p->minus)
		count += ft_fprint_i(numstr, n, p, fd);
	return (count);
}

static int	ft_fprint_sign_precision(int n, t_format *p, int fd)
{
	int	count;

	count = 0;
	if ((n < 0) && p->precision == -1)
	{
		count += ft_putchar_fd('-', fd);
		--p->width;
	}
	else if (p->plus == 1)
		count += ft_putchar_fd('+', fd);
	else if (p->space == 1)
	{
		count += ft_putchar_fd(' ', fd);
		--p->width;
	}
	return (count);
}

static int	ft_fprint_i(char *nbrstr, int n, t_format *p, int fd)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		if (!p->zero || p->precision >= 0)
			count += ft_putchar_fd('-', fd);
	}
	else if (p->plus && !p->zero)
		count += ft_putchar_fd('+', fd);
	else if (p->space && !p->zero)
		count += ft_putchar_fd(' ', fd);
	if (p->precision >= 0)
		count += ft_fpad_width((p->precision - 1),
				(ft_strlen(nbrstr) - 1), 1, fd);
	count += ft_fprint_str(nbrstr, fd);
	return (count);
}
