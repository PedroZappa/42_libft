/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:22:13 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/05 10:42:13 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <ctype.h>  // isascii()
#include <stdio.h>  // printf()

int main(int argc, char *argv[])
{
	char c = '*';
	
	if (argc == 2)
		c = argv[argc-1][0];

	// Tests for ft_isalnum
	printf("isascii(%c) => %i\n", c, isascii(c));
	printf("ft_isascii(%c) => %i\n", c, ft_isascii(c));
}
*/
