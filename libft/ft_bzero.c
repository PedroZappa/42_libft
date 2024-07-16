/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:31:02 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/05 20:07:30 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Sets the first n bytes of the memory area pointed to by s to 0.
/// @param s	Memory area
/// @param n	Number of bytes to be set to 0
void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) s;
	while (i < n)
		ptr[i++] = '\0';
}
/*
int main(int argc, char *argv[])
{
	char *str;
	size_t n = 3;
	
	if (argc == 2)
		str = argv[argc-1];
	else if (argc == 3)
	{
		str = argv[argc-2];
		n = atoi(argv[argc-1]);
	}
	else
	{
		printf("Usage: %s [c] [n]\n", argv[0]);
		return (0);
	}

	// Tests
	printf("argc => %d\n", argc);
	printf("str pre-bzero() => '%s'	| n => %lu\n", str, n);
	ft_bzero(str, n);
	printf("str post-bzero() => '%s'\n", str);
	
	return (0);
}
*/
