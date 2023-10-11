/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:59:59 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/11 21:21:13 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		++i;
	}
}

void	ft_change(unsigned int i, char *str)
{
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
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
	printf("striteri(%s, change) = ", str);
	ft_striteri(str, ft_change);
	printf("%s\n", str);

	return (0);
}
