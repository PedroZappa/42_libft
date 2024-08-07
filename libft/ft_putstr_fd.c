/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:07:56 by passunca          #+#    #+#             */
/*   Updated: 2024/02/01 21:04:55 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Writes a string to the given file descriptor
/// @param s	string to write
/// @param fd	file descriptor
///	@return		SUCCESS(number of characters written)
///	@return		FAILURE(0)
int	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s || (fd < 0))
		return (0);
	len = 0;
	while (*s)
		len += ft_putchar_fd(*s++, fd);
	return (len);
}
/*
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
	printf("ft_putstr_fd('%s', %d) => ", s, fd);
	fflush(stdout);
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (0);
}
*/
