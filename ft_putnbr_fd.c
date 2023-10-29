/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:14:56 by passunca          #+#    #+#             */
/*   Updated: 2023/10/29 21:06:02 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_fd(int n, int fd)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	else if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		n = -n;
		len += ft_putnbr_fd(n, fd);
		return (len);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (1);
	}
	n = ft_atoi(argv[1]);
	ft_putnbr_fd(n, 1);
	printf("\n");
	return (0);
}
*/
