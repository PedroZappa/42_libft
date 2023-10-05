/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:07:39 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/05 21:44:30 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return ((void *)dest);
}
/*
int main(int argc, char *argv[])
{
	char *dest = NULL;
	char *src = NULL;
	size_t n = 3;
	
	if (argc == 2)
		src = argv[argc-1];
	else if (argc == 3)
	{
		src = argv[argc-2];
		n = atoi(argv[argc-1]);
	}
	else
	{
		printf("Usage: %s [src] [n]\n", argv[0]);
		return (0);
	}

	// Tests
	printf("src => '%s'	|	n => %ld\n", src, n);
	ft_memcpy(dest, src, n);
	printf("dest => '%s'\n", dest);

	return (0);
}
*/
