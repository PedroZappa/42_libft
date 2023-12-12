/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:41:37 by passunca          #+#    #+#             */
/*   Updated: 2023/10/30 20:12:07 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	len;

	len = ft_numlen(n, 10);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (len + 1);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n *= -1;
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar_fd(n % 10 + '0', 1);
	}
	else
		ft_putchar(n + '0');
	return (len);
}
//
// int main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	ft_putnbr(ft_atoi(argv[1]));
// 	printf("\n");
// 	return (0);
// }
