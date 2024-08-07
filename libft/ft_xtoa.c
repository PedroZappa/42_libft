/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:43:40 by passunca          #+#    #+#             */
/*   Updated: 2023/11/09 14:43:51 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_hexlen(long nb);
static char		*ft_xtos(unsigned long int nb, char *str, size_t len);

/// @brief			Converts an unsigned integer to a string
/// @param nb		Number to convert
/// @param is_upper	1 if the string should be in uppercase
/// @return			SUCCESS(Pointer to the string)
/// @return			FAILURE(NULL)
char	*ft_xtoa(unsigned long int nb, int is_upper)
{
	size_t	len;
	char	*str;
	int		i;

	str = 0;
	len = ft_hexlen(nb);
	str = ft_xtos(nb, str, len);
	if (!str)
		return (NULL);
	if (is_upper)
	{
		i = 0;
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'f')
				str[i] -= 32;
			i++;
		}
	}
	return (str);
}

/// @brief		Length of a string containing the hexadecimal representation
/// @param nb	Number to convert
/// @return		Length of the string
static size_t	ft_hexlen(long nb)
{
	size_t	len;

	len = 0;
	if (!nb)
		return (1);
	while (nb >= 1)
	{
		nb /= 16;
		++len;
	}
	return (len);
}

/// @brief		Converts an unsigned integer to a string
/// @param nb	Number to convert
/// @param str	Pointer to the string
/// @param len	Length of the string
/// @return		SUCCESS(Pointer to the string)
/// @return		FAILURE(NULL)
static char	*ft_xtos(unsigned long int nb, char *str, size_t len)
{
	int	mod;

	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	--len;
	while (len != (size_t)-1)
	{
		mod = nb % 16;
		if (mod < 10)
			str[len] = mod + '0';
		else if (mod >= 10)
			str[len] = (mod - 10) + 'a';
		nb = nb / 16;
		len--;
	}
	return (str);
}
