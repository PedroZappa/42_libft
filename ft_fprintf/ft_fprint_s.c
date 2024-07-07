/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:00 by passunca          #+#    #+#             */
/*   Updated: 2023/11/08 20:54:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int	ft_fputstr(const char *str, t_format p, int fd);
static int	ft_fprint_s_precision(const char *str, int precision, int fd);

int	ft_fprint_s(const char *str, t_format p, int fd)
{
	int		count;

	count = 0;
	if ((str == NULL) && (p.precision >= 0) && (p.precision < 6))
		str = "";
	if (!str)
		str = "(null)";
	if ((p.precision >= 0) && ((size_t)p.precision > ft_strlen(str)))
		p.precision = ft_strlen(str);
	if (p.minus)
		count += ft_fputstr(str, p, fd);
	if (p.precision >= 0)
		count += ft_fpad_width(p.width, p.precision, 0, fd);
	else
		count += ft_fpad_width(p.width, ft_strlen(str), 0, fd);
	if (!p.minus)
		count += ft_fputstr(str, p, fd);
	return (count);
}

static int	ft_fputstr(const char *str, t_format p, int fd)
{
	int		count;

	count = 0;
	if (p.precision >= 0)
	{
		count += ft_fpad_width(p.precision, ft_strlen(str), 0, fd);
		count += ft_fprint_s_precision(str, p.precision, fd);
	}
	else
		count += ft_fprint_s_precision(str, ft_strlen(str), fd);
	return (count);
}

static int	ft_fprint_s_precision(const char *str, int precision, int fd)
{
	int	count;

	count = 0;
	while (str[count] && count < precision)
		ft_putchar_fd(str[count++], fd);
	return (count);
}

int	ft_fprint_str(const char *str, int fd)
{
	int	len;

	if (str == NULL)
		return (ft_putstrn_fd("(null)", fd, 6));
	len = ft_strlen(str);
	return (ft_putstrn_fd((char *)str, fd, len));
}
