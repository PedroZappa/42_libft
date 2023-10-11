/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:53:48 by passunca          #+#    #+#             */
/*   Updated: 2023/10/11 20:53:07 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	addn(unsigned int n, char c)
{	
	return (c + n);
}

int main(int argc, char *argv[])
{
	char *str;

	if (argc != 2)
	{
		printf("Usage: %s <string>", argv[0]);
		return (1);
	}
	str = argv[1];

	// Tests
	printf("strmapi(%s, rotn) = ", str);
	printf("%s\n", ft_strmapi(str, addn));

	return (0);
}
*/
