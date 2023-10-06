/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:42:59 by passunca          #+#    #+#             */
/*   Updated: 2023/10/06 11:16:59 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;

	if (!dest && !src)
		return (dest);
	pd = dest;
	ps = src;
	if (pd < ps)
		while (n--)
			*(pd++) = *(ps++);
	else
	{
		pd += n;
		ps += n;
		while (n--)
			*(--pd) = *(--ps);
	}
	return (dest);
}
/*
int main(int argc, char *argv[])
{
	char *dest = malloc(42);
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
	printf("src => '%s'	| n => %ld\n", src, n);
	ft_memmove(dest, src, n);
	printf("dest => '%s'\n", dest);

	return (0);
}
*/
