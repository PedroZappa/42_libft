/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:51:59 by passunca          #+#    #+#             */
/*   Updated: 2023/10/05 11:00:08 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (d);
	else
		return (0);
}
/*
#include <ctype.h>  // isdigit()
#include <stdio.h>  // printf()

int main(int argc, char *argv[])
{
	char c = '*';
	
	if (argc == 2)
		c = argv[argc-1][0];

	// Tests for ft_isalnum
	printf("isdigit(%c) => %i\n", c, isdigit(c));
	printf("ft_isdigit(%c) => %i\n", c, ft_isdigit(c));
}
*/
