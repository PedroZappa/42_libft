/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:19:22 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/08 19:50:33 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nb;
	int	sign;

	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		if (*(nptr + 1) == '-' || *(nptr + 1) == '+')
			return (0);
		nptr++;
	}
	nb = 0;
	while (ft_isdigit(*nptr))
		nb = nb * 10 + (*nptr++ - '0');
	return (nb * sign);
}
