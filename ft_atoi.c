/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:19:22 by passunca          #+#    #+#             */
/*   Updated: 2023/10/09 09:54:38 by passunca         ###   ########.fr       */
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
/*
int main (int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (0);
	}
	
	printf("Input string:\t\'%s\'\n", argv[1]);
	printf("ft_atoi return:\t\'%i\'\n", ft_atoi(argv[1]));
}
*/
