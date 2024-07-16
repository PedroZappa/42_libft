/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_absd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:27:48 by passunca          #+#    #+#             */
/*   Updated: 2024/02/14 11:32:12 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief		returns the absolute value of a double
/// @param n	double
/// @return		absolute value of n
double	ft_absd(double n)
{
	if (n < 0)
		return (-n);
	return (n);
}
// compile with: cc ft_absd.c ft_atod.c ft_isdigit.c ft_isspace.c 
/*
#include <stdio.h>
#include "libft.h"

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%f\n", ft_absd(ft_atod(argv[1])));
	return 0;
}
*/
