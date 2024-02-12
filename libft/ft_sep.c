/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sep.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:15:29 by passunca          #+#    #+#             */
/*   Updated: 2024/02/05 15:24:57 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../ft_printf/ft_printf.h"

void	ft_sep(char bookends, char sep, int len)
{
	len -= 2;
	ft_printf("%c", bookends);
	while (len--)
		ft_printf("%c", sep);
	ft_printf("%c\n", bookends);
}

void	ft_sep_color(char bookends, char sep, int len, char *color)
{
	len -= 2;
	ft_printf("%s", color);
	ft_printf("%c", bookends);
	while (len--)
		ft_printf("%c", sep);
	ft_printf("%c", bookends);
	ft_printf("%s\n", NC);
}
/*
int	main(int argc, char **argv)
{
	char	bookends;
	char	sep;
	int		len;
	char	*color;

	if (argc == 5)
	{
		bookends = argv[1][0];
		sep = argv[2][0];
		len = ft_atoi(argv[3]);
		color = argv[4];
		ft_sep(bookends, sep, len);
		ft_sep_color(bookends, sep, len, color);
	}
}
*/
