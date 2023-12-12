/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:21:27 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/27 19:52:28 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_putstrn_fd(char *str, int fd, int n)
{
	if (n < 0)
		return (0);
	if (str)
		return ((int)write(fd, str, n));
	return (0);
}
//
// int main (int argc, char *argv[])
// {
// 	char *str;
// 	int fd;
// 	int n;
// 	int len;
//
// 	if (argc != 4)
// 	{
// 		printf("Usage: %s <str> <fd> <n>\n", argv[0]);
// 		return (0);
// 	}
//
// 	str = argv[1];
// 	fd = ft_atoi(argv[2]);
// 	n = ft_atoi(argv[3]);
//
// 	len = ft_putstrn_fd(str, fd, n);
// 	printf("\nft_printf: %d\n", len);
// }
