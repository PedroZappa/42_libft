/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 10:14:39 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/10 09:52:58 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		--i;
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
	printf("ft_strrchr => %s\n", ft_strrchr(argv[1], argv[2][0]));
	printf("%c", 1024);
	return (0);
}
*/
