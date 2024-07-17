/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:23:00 by passunca          #+#    #+#             */
/*   Updated: 2024/02/12 10:51:56 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief			Calculate the power of a number
/// @param base		base
/// @param exp		exponent
/// @return			base^exp
double	ft_pow(double base, double exp)
{
	double	pow;
	double	i;

	if (exp < 0)
	{
		exp = -exp;
		base = (1 / base);
	}
	i = 0;
	pow = 1;
	while (i++ < exp)
		pow *= base;
	return (pow);
}

// compile:
//	cc -Wall -Wextra -Werror ft_pow.c ft_atod.c ft_isdigit.c ft_isspace.c -lm
/*
#include <math.h>
int main(int argc, char **argv)
{
	double base, exp;

	if (argc != 3)
		return(printf("Usage: a.out <base> <exp>\n"));

	base = ft_atod(argv[1]);
	exp = ft_atod(argv[2]);
	printf("base = %f\nexp = %f\n", base, exp);
	printf("ft_pow(base,exp) = %f\n", ft_pow(base, exp));
	printf("pow(base,exp) = %f\n", pow(base, exp));
}
*/
