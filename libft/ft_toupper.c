/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:16:16 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/06 20:41:25 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Converts a character to uppercase
/// @param c	Character to convert
/// @return		Character in uppercase
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(int argc, char *argv[])
{
	char *str = NULL;
	int i;

	if (argc == 2)
		str = argv[1];
	else
	{
		printf("Usage: %s [string]\n", argv[0]);
		return (0);
	}

	i = 0;
	while (str[i])
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	printf("\n");

	return (0);
}
*/
