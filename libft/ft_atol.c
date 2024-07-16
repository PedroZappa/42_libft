/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:30:51 by passunca          #+#    #+#             */
/*   Updated: 2024/05/07 15:33:12 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Converts a string to a long integer
/// @param nptr	Pointer to the string to convert
/// @return		SUCCESS(long integer)
long	ft_atol(const char *nptr)
{
	int			sign;
	long int	nbr;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (ft_issign(*nptr))
		sign *= ft_issign(*nptr++);
	while (ft_isdigit(*nptr))
		nbr = nbr * 10 + (*nptr++ - '0');
	return (nbr * sign);
}
