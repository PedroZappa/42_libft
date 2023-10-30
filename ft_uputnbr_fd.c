/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:53:54 by passunca          #+#    #+#             */
/*   Updated: 2023/10/30 11:23:09 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_uputnbr_fd(unsigned int n, int fd)
{
	if (n > 10)
	{
		ft_uputnbr_fd(n / 10, 1);
		ft_uputnbr_fd(n % 10, 1);
	}
	else
		ft_putchar_fd((n + '0'), 1);

}
//
// int	main(int argc, char *argv[])
// {
// 	unsigned int	n;
// 	int				len;
// 	char			*nbr;
//
// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	n = ft_atoi(argv[1]);
// 	len = ft_uputnbr_fd(n, 1);
// 	ft_putstr_fd(nbr, 1);
// 	printf("\n");
// 	free(nbr);
// 	return (0);
// }
