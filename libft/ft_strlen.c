/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:33:20 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/05 21:17:24 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Take length of the string
/// @param s	Pointer to the string
/// @return		SUCCESS(length of the string)
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int main(int argc, char *argv[])
{
	char *str = "Zedr0";
	
	if (argc == 2)
		str = argv[argc-1];

	// Tests for ft_isalnum
	printf("strlen(%s) => %lu\n", str, strlen(str));
	printf("ft_strlen(%s) => %lu\n", str, ft_strlen(str));
}
*/
