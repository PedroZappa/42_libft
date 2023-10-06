/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:18:44 by passunca          #+#    #+#             */
/*   Updated: 2023/10/06 10:23:40 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

#include <ctype.h>  // isprint()
#include <stdio.h>  // printf()
/*
int main(int argc, char *argv[])
{
	char c = '*';
	
	if (argc == 2)
		c = argv[argc-1][0];

	// Tests for ft_isalnum
	printf("isprint(%c) => %i\n", c, isprint(c));
	printf("ft_isprint(%c) => %i\n", c, ft_isprint(c));
}
*/
