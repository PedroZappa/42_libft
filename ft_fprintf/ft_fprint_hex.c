/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:44 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 12:00:33 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int	ft_print_hexa(char *nbrstr, t_hexa_meta **norm,
				t_format *p, int fd);
static int	ft_puthex(char *nbrstr, t_hexa_meta **norm, t_format p, int fd);
static int	ft_putx_prefix(int is_upper, int fd);

int	ft_print_x(size_t n, int is_upper, t_format p, int fd)
{
	char		*nbrstr;
	int			count;
	t_hexa_meta	*norm;
	
	norm = malloc(sizeof(t_hexa_meta));
	norm->is_upper = is_upper;
	norm->n = n;
	count = 0;
	if (p.precision == 0 && n == 0)
	{
		count += ft_pad_width(p.width, 0, 0, fd);
		return (count);
	}
	nbrstr = ft_xtoa(n, is_upper);
	if (!nbrstr)
		return (0);
	count += ft_print_hexa(nbrstr, &norm, &p, fd);
	free(nbrstr);
	free(norm);
	return (count);
}

static int	ft_print_hexa(char *nbrstr, t_hexa_meta **norm, t_format *p, int fd)
{
	int		count;

	count = 0;
	if (p->zero && p->sharp && (*norm)->n != 0)
	{
		count += ft_putx_prefix((*norm)->is_upper, fd);
		p->width -= 2;
	}
	if (p->minus)
		count += ft_puthex(nbrstr, norm, *p, fd);
	if ((p->precision >= 0) && ((size_t)p->precision < ft_strlen(nbrstr)))
		p->precision = ft_strlen(nbrstr);
	if (p->precision >= 0)
	{
		p->width -= p->precision;
		count += ft_pad_width(p->width, 0, 0, fd);
	}
	else
		count += ft_pad_width(p->width,
				(ft_strlen(nbrstr) + (p->sharp * 2)), p->zero, fd);
	if (!p->minus)
		count += ft_puthex(nbrstr, norm, *p, fd);
	return (count);
}

static int	ft_puthex(char *nbrstr, t_hexa_meta **norm, t_format p, int fd)
{
	int	count;

	count = 0;
	if (!p.zero && p.sharp && (*norm)->n != 0)
		count += ft_putx_prefix((*norm)->is_upper, fd);
	if (p.precision >= 0)
		count += ft_pad_width((p.precision - 1),
				(ft_strlen(nbrstr) - 1), 1, fd);
	count += ft_print_str(nbrstr, fd);
	return (count);
}

static int	ft_putx_prefix(int is_upper, int fd)
{
	if (is_upper)
		return (write(fd, "0X", 2));
	return (write(fd, "0x", 2));
}
