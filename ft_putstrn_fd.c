/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:21:27 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/27 11:51:45 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstrn_fd(char *str, int fd, int n)
{
	int	len;

	len = 0;
	if (n < 0)
		return (-1);
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
// 	ft_putstrn_fd(str, fd, n);
// }
