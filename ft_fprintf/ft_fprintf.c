/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:18 by passunca          #+#    #+#             */
/*   Updated: 2023/11/08 18:32:40 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list		ap;
	char		*str;
	t_format	p;

	if (!format || *format == '\0')
		return (0);
	p = ft_fnewformat();
	str = ft_strdup(format);
	if (!str || *str == '\0')
		return (0);
	va_start(ap, format);
	ft_fparse_bonus(str, ap, &p, fd);
	va_end(ap);
	free(str);
	return (p.len);
}
