/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:28:29 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 21:51:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

int	ft_isflag(int c)
{
	return (ft_isdigit(c) || ft_isspecif(c) || ft_isflagtype(c));
}

int	ft_isspecif(int c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'p' || c == '%' || c == 'f')
		return (1);
	return (0);
}

int	ft_isflagtype(int c)
{
	if (c == '-' || c == '0' || c == '.' || c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

int	ft_pad_width(int total_width, int size, int zero, int fd)
{
	int	count;

	count = 0;
	while (total_width - size > 0)
	{
		if (zero)
			count += ft_putchar_fd('0', fd);
		else
			count += ft_putchar_fd(' ', fd);
		--total_width;
	}
	return (count);
}
