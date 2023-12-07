/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:23:57 by passunca          #+#    #+#             */
/*   Updated: 2023/11/25 22:01:11 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*str;
	char	*sptr;
	int		len;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	sptr = s1;
	len = ft_strlen_gnl(s1) + ft_strlen_gnl(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (s1)
		while (*s1)
			str[i++] = *s1++;
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	if (sptr)
		free(sptr);
	return (str);
}

/* Get the length of a givengiven 'str' */
int	ft_strlen_gnl(char *str)
{
	int	len;

	len = 0;
	if (str)
		while (str[len])
			++len;
	return (len);
}

/* Find a char in a given 'str' */
char	*ft_strchr_gnl(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		++s;
	}
	if ((*s == '\0') && (c == '\0'))
		return ((char *)s);
	return (NULL);
}
