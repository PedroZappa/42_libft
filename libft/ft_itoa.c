/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:01:54 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/19 20:18:19 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_char(char *str, unsigned int nb, long int len);
static long int	ft_nlen(int n);

/// @brief			Converts an integer to a string
/// @param n		number to convert
/// @return			SUCCESS(Pointer to the string)
/// @return			FAILURE(NULL)
char	*ft_itoa(int n)
{
	unsigned int	nb;
	long int		len;
	char			*str;

	len = ft_nlen(n);
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

/// @brief			Converts an integer to a string
/// @param str		Pointer to string to convert
/// @param nb		number to convert
/// @param len		length of the string
/// @return			SUCCESS(Pointer to the string)
static char	*ft_char(char *str, unsigned int nb, long int len)
{
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

static long int	ft_nlen(int n)
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

/*
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
*/
