/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:00 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 12:00:04 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_print_c(char c, t_format *p, int fd)
{
	int		count;

	count = 0;
	if (p->minus)
		count += ft_putchar_fd(c, fd);
	count += ft_pad_width(p->width, 1, 0, fd);
	if (!p->minus)
		count += ft_putchar_fd(c, fd);
	p->width = 0;
	return (count);
}
