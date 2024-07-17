/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:59:59 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/12 09:23:30 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Applies the function f to each character of the string
/// @param s	Pointer to the string
/// @param f	Pointer to the function to apply
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
/*
void	ft_print(unsigned int i, char *str)
{
	printf("s[%d] = \'%c\'\n", i, *(str));
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
	printf("striteri(\"%s\", ft_print) =>\n", str);
	ft_striteri(str, &ft_print);
	printf("str : %s\n", str);

	return (0);
}
*/
