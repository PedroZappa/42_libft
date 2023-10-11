/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:01:54 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/11 12:58:49 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char(char *str, unsigned int nb, long int len)
{
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

static long int	ft_numlen(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		++len;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	long int		len;
	char			*str;

	len = ft_numlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		nb = -n;
		str[0] = '-';
	}
	else
		nb = n;
	str = ft_char(str, nb, len);
	return (str);
}

int main(int argc, char *argv[])
{
	int		n;
	char	*str;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}
	n = ft_atoi(argv[1]);
	str = ft_itoa(n);
	// Test
	printf("%s\n", str);
	free(str);
	return (0);

}
