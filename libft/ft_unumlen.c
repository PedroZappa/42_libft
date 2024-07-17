/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unumlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:30:45 by passunca          #+#    #+#             */
/*   Updated: 2023/10/30 20:31:22 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Calculates the length of an unsigned integer
/// @param n	Number to measure
/// @param base	base of the number
/// @return		SUCCESS(length of the number)
/// @return		FAILURE(1)
int	ft_unumlen(unsigned int n, int base)
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
