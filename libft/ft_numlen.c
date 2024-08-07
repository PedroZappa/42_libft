/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:52:08 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/30 15:29:00 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Calculates the length of an integer
/// @param n	Number to measure
/// @param base	base of the number
/// @return		SUCCESS(length of the number)
int	ft_numlen(int n, int base)
{
	int	len;

	len = 0;
	if (!base)
		base = 10;
	if (n == 0)
		return (1);
	while (n)
	{
		++len;
		n /= base;
	}
	return (len);
}
