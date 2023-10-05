/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:13:01 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/05 21:18:57 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr++ = (unsigned char) c;
		--n;
	}
	return (s);
}
/*
int main(int argc, char *argv[])
{
	char *str;
	int c = 88;	// 'X'
	size_t n = 3;
	
	if (argc == 2)
		str = argv[argc-1];
	else if (argc == 3)
	{
		str = argv[argc-2];
		c = atoi(argv[argc-1]);
	}
	else if (argc == 4)
	{
		str = argv[argc-3];
		c = atoi(argv[argc-2]);
		n = atoi(argv[argc-1]);
	}
	else
	{
		printf("Usage: %s [c] [n]\n", argv[0]);
		return (0);
	}

	// Tests
	printf("argc => %d\n", argc);
	printf("str pre-memset => %s	| c => %d	| n => %lu\n", str, c, n);
	printf("ft_memset(str, c, n) => %p\n", ft_memset(str, c, n));
	printf("str post-memset => %s	| c => %d	| n => %lu\n", str, c, n);
}
*/
