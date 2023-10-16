/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:26:27 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/16 14:20:36 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static int	ft_segcount(char const *s, char sep)
{
	size_t	segs;
	size_t	i;
	int		counting;

	i = 0;
	segs = 0;
	counting = 0;
	while (s[i])
	{
		if (s[i] != sep && !counting)
		{
			counting = 1;
			++segs;
		}
		if (s[i] == sep && counting)
			counting = 0;
		++i;
	}
	return (segs);
}

static size_t	ft_seglen(char const *s, char sep)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != sep)
		++i;
	return (i);
}

static	char	**ft_free(char **strs, size_t seg)
{
	size_t	i;

	i = 0;
	while (i < seg)
	{
		free(strs[i]);
		++i;
	}
	free(strs);
	return (0);
}

static char	**ft_alloc(char **strs, char const *s, char sep, size_t segs)
{
	size_t	i;
	size_t	j;
	size_t	seg;

	i = 0;
	seg = 0;
	while (seg < segs)
	{
		j = 0;
		while (s[i] && s[i] == sep)
			++i;
		strs[seg] = malloc(ft_seglen(&s[i], sep) + 1);
		if (!strs[seg])
			return (ft_free(strs, seg));
		while (s[i] && s[i] != sep)
		{
			strs[seg][j] = s[i];
			++i;
			++j;
		}
		strs[seg][j] = '\0';
		++seg;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	segs;

	segs = ft_segcount(s, c);
	strs = malloc((segs + 1) * sizeof(char *));
	if (!strs)
		return (0);
	strs[segs] = 0;
	if (segs > 0)
		strs = ft_alloc(strs, s, c, segs);
	return (strs);
}
/*
int main(int argc, char *argv[])
{
	char **strs;
	char *str;
	char c;
	size_t i;
	
	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (1);
	}
	str = argv[1];
	c = argv[2][0];
	strs = ft_split(str, c);
	
	// Test 
	printf("ft_split(\"%s\", '%s') =\n{", argv[1], argv[2]); 
	i = 0;
	while (strs[i])
	{
		printf("\n\t\"%s\"", strs[i]);
		i++;
	}
	printf("\n}\n");

	// Free Memory 
	free(strs);
	return (0);
}
*/
