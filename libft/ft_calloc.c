/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:57:51 by passunca          #+#    #+#             */
/*   Updated: 2023/10/09 12:17:50 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

/// @brief			Alloc memory for an array of nmemb of size bytes each
/// @param nmemb	Number of elements
/// @param size		Size of each element
/// @return			SUCCESS(Pointer to the allocated memory)
/// @return			FAILURE(NULL)
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	to_alloc;

	if ((nmemb == 0) || (size == 0))
	{
		nmemb = 1;
		size = 1;
	}
	to_alloc = (nmemb * size);
	ptr = malloc(to_alloc);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, to_alloc);
	return ((void *)ptr);
}
/*
int main (int argc, char *argv[])
{
	void *calloced;
	if (argc != 3)
	{
		printf("Usage: %s <nmemb> <size>", argv[0]);
		return (0);
	}
	// Tests
	printf("ft_calloc( %i, %i )\n", 
			ft_atoi(argv[1]), ft_atoi(argv[2]));
	calloced = ft_calloc(ft_atoi(argv[1]), ft_atoi(argv[2]));
	printf("Start of ft_calloc() :\t%p\n", calloced);
	printf("Last allocated mem loc:\t%p\n",
			(calloced + ft_atoi(argv[2])));
}
*/
