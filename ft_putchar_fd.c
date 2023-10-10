/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:01:10 by passunca          #+#    #+#             */
/*   Updated: 2023/10/10 11:21:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main (int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage: %s <char> <fd>\n", argv[0]);
		return (0);
	}

	// Tests
	printf("");
	ft_putchar_fd(argv[1][0], ft_atoi(argv[2]));
	ft_putchar_fd('\n', ft_atoi(argv[2]));
	return (0);
}
*/
