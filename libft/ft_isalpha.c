/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:12:08 by passunca          #+#    #+#             */
/*   Updated: 2024/02/04 11:06:45 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	else
		return (0);
}

int ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

int ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}
/*
#include <ctype.h>  // isalpha()
#include <stdio.h>  // printf()

int main(int argc, char *argv[])
{
	char c = '*';
	
	if (argc == 2)
		c = argv[argc-1][0];

	// Tests for ft_isalnum
	printf("isalpha(%c) => %i\n", c, isalpha(c));
	printf("ft_isalpha(%c) => %i\n", c, ft_isalpha(c));
}
*/
