/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:30:59 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/08 10:55:36 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Compares the first n bytes of s1 and s2
/// @param s1	Pointer to the first memory area
/// @param s2	Pointer to the second memory area
/// @return		SUCCESS(Pointer to the first occurrence of c in s)
/// @return		FAILURE(0)
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		++i;
	}
	return (0);
}
/*
int main (int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Usage: %s str1 str2 n\n", argv[0]);
		return (0);
	}
	printf("ft_memcmp( %s, %s, %d ) = %d\n", argv[1], argv[2], atoi(argv[3]), 
		ft_memcmp(argv[1], argv[2], atoi(argv[3])));
	return (0);

}
*/
