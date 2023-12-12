/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:39:33 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/11 11:48:47 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, s1_len);
	ft_memcpy((str + s1_len), s2, s2_len);
	str[s1_len + s2_len] = '\0';
	return (str);
}
/*
int main(int argc, char *argv[])
{
	char	*str1;
	char	*str2;
	char	*joined;

	if (argc != 3)
	{
		printf("Usage: %s str1 str2", argv[0]);
		return (1);
	}
	str1 = argv[1];
	str2 = argv[2];
	joined = ft_strjoin(str1, str2);
	// Tests
	printf("ft_strjoin( '%s', '%s') = ", str1, str2);
	printf("'%s'\n", joined);

	free(joined);
	return (0);
}
*/
