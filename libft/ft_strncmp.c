/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:13:33 by zedr0             #+#    #+#             */
/*   Updated: 2024/02/02 11:29:40 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 || !s2 || (n <= 0))
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n) && s1[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	return (0);
}
/*
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Usage: %s s1 s2 n\n", argv[0]);
		return EXIT_FAILURE;
	}

	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));

	return EXIT_SUCCESS;
}
*/
