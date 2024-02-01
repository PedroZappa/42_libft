/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:46:10 by zedr0             #+#    #+#             */
/*   Updated: 2024/02/01 21:16:26 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += 32;
	return (c);
}
/*
char main(char argc, char *argv[])
{
	char *str = NULL;
	char i;

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
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");

	return (0);
}
*/
