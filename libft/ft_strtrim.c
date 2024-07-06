/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:00:57 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/11 12:15:22 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = (ft_strlen(s1) - 1);
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[start] && ft_strchr(set, s1[end]))
		--end;
	str = ft_substr(s1, start, ((end - start) + 1));
	return (str);
}
/*
int main(int argc, char *argv[])
{
	char *str;
	char *set;
	char *trimmed;

	if (argc != 3)
	{
		printf("Usage: %s <string> <set>\n", argv[0]);
		return (1);
	}
	str = argv[1];
	set = argv[2];
	trimmed = ft_strtrim(str, set);

	// Test
	printf("ft_strtrim('%s', '%s') => ", str, set);
	printf("'%s'\n", trimmed); 
}
*/

char	*ft_strtrim_lead(char const *s1, char const *set)
{
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		++s1;
	if (!*s1)
		return (ft_strdup(""));
	str = ft_substr(s1, 0, ft_strlen(s1));
	return (str);
}

char	*ft_strtrim_trail(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]) && (len > 0))
		--len;
	str = ft_substr(s1, 0, len);
	return (str);
}
