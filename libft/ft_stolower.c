/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:02:32 by passunca          #+#    #+#             */
/*   Updated: 2024/02/04 11:22:28 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Converts a string to lowercase
/// @param str	Pointer to the string
/// @return		SUCCESSS(Pointer to the string)
char	*ft_stolower(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (ft_isupper(str[i]))
			str[i] = ft_tolower(str[i]);
	return (str);
}
/*
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_stolower(argv[1]));
	return 0;
}
*/
