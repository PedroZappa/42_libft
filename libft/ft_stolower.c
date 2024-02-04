/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:02:32 by passunca          #+#    #+#             */
/*   Updated: 2024/02/04 11:21:51 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Converts a string to lowercase.
 *	*/
char	*ft_stolower(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
		if (ft_isupper(str[i]))
			str[i] = ft_tolower(str[i]);
	return (str);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_stolower(argv[1]));
	return 0;
}