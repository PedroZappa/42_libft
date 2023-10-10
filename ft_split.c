/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:26:27 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/10 19:58:20 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	sub_str;
	size_t	sub_len;
	size_t	i;

	strs = malloc(sizeof(char *) * (ft_segcount(s, c) + 1));
	if (!strs)
		return (NULL);
	i = -1;
	sub_str = 0;
	sub_len = 0;
	while (s[++i])
	{
		if (s[i] != c)
			++sub_len;
		else if (sub_len > 0 && s[i] == c)
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
