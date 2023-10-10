/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:07:56 by passunca          #+#    #+#             */
/*   Updated: 2023/10/10 11:35:46 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		ft_putchar_fd(*s++, fd);
}
/*
int main (int argc, char **argv)
{
	char *s;
	int fd;

	if (argc != 3)
	{
		printf("Usage: %s <char> <fd>\n", argv[0]);
		return (0);
	}
	s = argv[1];
	fd = ft_atoi(argv[2]);
	// Tests
	printf("ft_putstr_fd('%s', %d) => ", s, fd);
	fflush(stdout);
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
*/
