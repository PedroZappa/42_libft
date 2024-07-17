/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:31:27 by passunca          #+#    #+#             */
/*   Updated: 2023/10/06 16:43:10 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Copies size bytes from src to dest string
/// @param dest	Pointer to the destination string
/// @param src	Pointer to the source string
/// @param size	Maximum number of bytes to be copied
/// @return		SUCCESS(Number of bytes copied)
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	if (size > 0)
	{
		i = 0;
		while (*(src + i) && (i < (size - 1)))
		{
			*(dest + i) = *(src + i);
			++i;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(int argc, char *argv[])
{
	char	*dest = malloc(42);
	char	*src = NULL;
	size_t	size = 3;
	
	if (argc == 2)
		src = argv[argc-1];
	else if (argc == 3)
	{
		src = argv[argc-2];
		size = atoi(argv[argc-1]);
	}
	else
	{
		printf("Usage: %s [src] [size]\n", argv[0]);
		return (0);
	}

	// Tests
	printf("ft_strlcpy(dest, '%s', %ld)\n", src, size);
	printf("dest => '%s'\t\t| length => %ld\n", dest, 
		ft_strlcpy(dest, src, size));

	return (0);
}
*/
