/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:34:19 by passunca          #+#    #+#             */
/*   Updated: 2023/10/30 15:21:27 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c, int *count)
{
	++(*count);
	return ((int)write(1, &c, 1));
}
//
// int main(int argc, char *argv[])	
// {
// 	int count;
//
// 	count = 0;
// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <number>\n", argv[0]);
// 		return (1);
// 	}
// 	ft_putchar(ft_atoi(argv[1]), &count);
// 	printf("\nCount: %d\n", count);
// 	return (0);
// }
