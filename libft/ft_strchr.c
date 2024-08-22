/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:11:48 by zedr0             #+#    #+#             */
/*   Updated: 2024/06/19 20:12:28 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief 	Searches for the first occurrence of the character c
/// @param s The string to be searched
/// @param c The character to search for
/// @return A pointer to the first occurrence of the character c in the string s
char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	return (ft_memchr(s, c, (ft_strlen(s) + 1)));
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
	printf("ft_strchr => %s\n", ft_strchr(argv[1], argv[2][0]));
	return (0);
}
*/
