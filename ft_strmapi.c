/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:53:48 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/11 14:39:09 by passunca         ###   ########.fr       */
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

char conv(unsigned int n, char c)
{
	if ((n % 2) == 0)
		c = ft_toupper(c);
	return (c);
}

int main(int argc, char *argv[])
{
	char *str;
	char (*func)(unsigned int, char);
	char c;
	int i;

	if (argc != 3)
	{
		printf("Usage: %s <string>", argv[0]);
		return (1);
	}
	str = argv[1];
	func = argv[2];
	// Tests
	printf("strmapi(%s, %s) = ", str, func);
	printf("%s\n", ft_strmapi(str, func));
	return (0);
}
