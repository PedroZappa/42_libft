/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:32:54 by passunca          #+#    #+#             */
/*   Updated: 2023/10/09 20:48:28 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Duplicate a string
/// @param s	Pointer to a string
/// @return		SUCCESS(Pointer to the duplicated string)
/// @return		FAILURE(NULL)
char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	i;

	if (!s)
		return (NULL);
	dst = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = s[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int main(int argc, char *argv[])
{
	char *dst = NULL;
	char *src = NULL;
	
	if (argc != 2)
	{
		printf("Usage: %s [s]\n", argv[0]);
		return (0);
	}

	src = argv[1];
	dst = ft_strdup(src);
	printf("ft_strdup('%s')\n", src);
	printf("dst => '%s'\n", dst);

	// Free memory
	free(dst);
}
*/
