/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:33:00 by passunca          #+#    #+#             */
/*   Updated: 2023/11/09 14:06:21 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	ft_print_c(char c, t_format *p)
{
	int		count;

	count = 0;
	if (p->minus)
		count += ft_putchar_fd(c, 1);
	count += ft_pad_width(p->width, 1, 0);
	if (!p->minus)
		count += ft_putchar_fd(c, 1);
	p->width = 0;
	return (count);
}
