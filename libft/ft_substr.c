/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:45:13 by passunca          #+#    #+#             */
/*   Updated: 2024/04/16 16:28:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min_len(size_t a, size_t b);
static size_t	ft_total_len(size_t s_len, unsigned int start, size_t len);

/// @brief			Creates a substring from a given string
/// @param s		Pointer to the string
/// @param start	Start index
/// @param len		Length of the substring
/// @return			SUCCESS(Pointer to the substring)
/// @return			FAILURE(NULL)
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
	{
		start = 0;
		len = 0;
	}
	sub = malloc(sizeof(char) * ft_total_len(s_len, start, len));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/// @brief		Minimum between two values
/// @param a	First value
/// @param b	Second value
/// @return		Minimum of a and b
static size_t	ft_min_len(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

/// @brief			Total length of the substring
/// @param s_len	Length of the string
/// @param start	Start index
/// @param len		Length of the substring
/// @return			SUCCESS(Total length)
static size_t	ft_total_len(size_t s_len, unsigned int start, size_t len)
{
	size_t	total;

	total = ft_min_len(s_len, len);
	if (start + len > s_len)
		total = s_len - start;
	return (total + 1);
}
/*
int main(int argc, char *argv[])
{
	unsigned int	start;
	size_t			len;
	char			*str;
	char			*sub_str;
 
	if (argc != 4)
	{
		printf("Usage: %s <string> <start> <length>\n", argv[0]);
		return (1);
	}
	str = argv[1];
	start = ft_atoi(argv[2]);
	len = ft_atoi(argv[3]);
	sub_str = ft_substr(str, start, len);
	// Tests
	printf("ft_substr(%s, %u, %lu) = ", str, start, len);
	printf("%s\n", sub_str);

	// free memory
	free(sub_str);

	return (0);
}
*/
