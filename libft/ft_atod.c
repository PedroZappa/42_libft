/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:12:46 by passunca          #+#    #+#             */
/*   Updated: 2024/02/03 22:35:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Converts a string to a double.
 *	*/
double	ft_atod(char *str)
{
	long	int_part;
	double	frac_part;
	double	pow;
	int		sign;

	int_part = 0;
	frac_part = 0;
	pow = 1;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign *= -1;
	while ((*str != '.') && ft_isdigit(*str)) 
		int_part = (int_part * 10) + (*str++ - '0');
	if (*str == '.')
		++str;
	while (ft_isdigit(*str))
	{
		pow /= 10;
		frac_part = (frac_part + (*str++ - '0') * pow);
	}
	return ((int_part + frac_part) * sign);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%f\n", ft_atod(argv[1]));
	return 0;
}
*/
