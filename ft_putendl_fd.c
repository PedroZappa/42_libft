/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:11:11 by passunca          #+#    #+#             */
/*   Updated: 2023/10/10 11:42:37 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
	ft_putchar_fd('\n', fd);
}

int main (int argc, char **argv)
{
	char *s;
	int fd;

	if (argc != 3)
	{
		printf("Usage: %s <str> <fd>\n", argv[0]);
		return (0);
	}
	s = argv[1];
	fd = ft_atoi(argv[2]);
	// Tests
	printf("ft_putendl_fd('%s', %d) => ", s, fd);
	fflush(stdout);
	ft_putendl_fd(s, fd);
	return (0);
}

