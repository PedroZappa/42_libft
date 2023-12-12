/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:46:10 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/06 20:53:02 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
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
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");

	return (0);
}
*/
