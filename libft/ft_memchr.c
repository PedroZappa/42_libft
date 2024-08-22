/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:00:08 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/07 21:03:39 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Locates the first occurrence of c in the s
/// @param s	Place in memory to search
/// @param c	Character to search
/// @param n	Maximum number of bytes to search
/// @return		SUCCESS(Pointer to the first occurrence of c in s)
/// @return		FAILURE(NULL)
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (0);
	}

	// Tests
	printf("Input string:\t%s\n", argv[1]);	
	printf("Input address:\t%p\n", argv[1]);	
	printf("ft_memchr found '%c' at address:\n", argv[2][0]);
	printf("\t\t%p\n", ft_memchr(argv[1], argv[2][0], ft_strlen(argv[1])));
	return (0);
}
*/
