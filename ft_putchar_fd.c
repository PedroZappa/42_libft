/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:01:10 by passunca          #+#    #+#             */
/*   Updated: 2023/10/10 11:32:13 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main (int argc, char *argv[])
{
	char c;
	int fd;

	if (argc != 3)
	{
		printf("Usage: %s <char> <fd>\n", argv[0]);
		return (0);
	}
	c = argv[1][0];
	fd = ft_atoi(argv[2]);
	// Tests
	printf("ft_putchar_fd('%c', %d) => ", c, fd);
	fflush(stdout);
	ft_putchar_fd(c, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}

