/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:26:27 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/12 20:57:31 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_segcount(char const *s, char sep)
{
	int	i;
	int	count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == sep && i > 0)
			++count;
		++i;
	}
	if (!s[i])
		++count;
	return (count);
}

char	**ft_free(char **strs)
{
	size_t	str;

	str = 0;
	while (strs[str])
		free(strs[str++]);
	free(strs);
	return (NULL);
}

void	*ft_memalloc(char **strs, char const *s, char sep)
{
	strs = malloc(sizeof(char *) * (ft_segcount(s, sep) + 1));
	if (!strs)
		return (NULL);
	return (strs);
}

static char	**ft_getseg(char const *s, char sep)
{
	char		**strs;
	size_t		sub_str;
	size_t		sub_len;
	long long	i;

	strs = malloc(sizeof(char *) * (ft_segcount(s, sep) + 1));
	if (!strs)
		return (NULL);
	i = -1;
	sub_str = 0;
	sub_len = 0;
	while (s[++i])
	{
		if (s[i] != sep)
			++sub_len;
		else if (sub_len > 0 && s[i] == sep)
		{
			strs[sub_str++] = ft_substr(s, i - sub_len, sub_len);
			sub_len = 0;
		}
	}
	if (sub_len > 0)
		strs[sub_str++] = ft_substr(s, i - sub_len, sub_len);
	strs[sub_str] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char		**strs;

	strs = ft_getseg(s, c);
	if (!strs)
		return (NULL);
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
