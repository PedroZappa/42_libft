/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:53:54 by passunca          #+#    #+#             */
/*   Updated: 2023/10/30 10:51:55 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_alloc_n(char *str, int len, unsigned int n);

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	int				len;


	len = ft_numlen(n, 10);
	str = NULL;
	str = ft_alloc_n(str, len, n);
	if (str == NULL)
		return (NULL);
	return (str);
}

static char	*ft_alloc_n(char *str, int len, unsigned int n)
{
	if (n == 0)
		len = 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

int main(int argc, char *argv[])
{
	char *nbr;
	int	n;

	if (argc != 2)
	{
		printf("Usage: %s <number>\n", argv[0]);
		return (1);
	}
	n = ft_atoi(argv[1]);
	nbr = ft_uitoa(n);
	ft_putstr_fd(nbr, 1);
	printf("\n");
	free(nbr);
	return (0);
}
