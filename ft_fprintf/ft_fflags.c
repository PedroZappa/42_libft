/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:38:09 by passunca          #+#    #+#             */
/*   Updated: 2023/11/08 21:46:06 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

t_format	ft_fnewformat(void)
{
	t_format	new_format;

	new_format.len = 0;
	new_format.neg = 0;
	new_format.specifier = 0;
	new_format.flag = 0;
	new_format.minus = 0;
	new_format.plus = 0;
	new_format.width = 0;
	new_format.precision = -1;
	new_format.zero = 0;
	new_format.dot = 0;
	new_format.space = 0;
	new_format.sharp = 0;
	return (new_format);
}

void	ft_fresetformat(t_format *prsd)
{
	prsd->neg = 0;
	prsd->specifier = 0;
	prsd->flag = 0;
	prsd->minus = 0;
	prsd->plus = 0;
	prsd->width = 0;
	prsd->precision = -1;
	prsd->zero = 0;
	prsd->dot = 0;
	prsd->space = 0;
	prsd->sharp = 0;
}

t_format	ft_flag_minus(t_format prsd)
{
	prsd.minus = 1;
	prsd.zero = 0;
	return (prsd);
}
