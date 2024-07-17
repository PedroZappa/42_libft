/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:55:28 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/06 20:11:06 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief		Appends size bytes from src to the dst 
/// @param dst	Pointer to the destination string
/// @param src	Pointer to the source string
/// @param size	Number of bytes to be appended
/// @return		SUCCESS(Number of bytes written)
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		len;
	size_t	i;

	i = 0;
	if (size < ft_strlen(dst))
		return (size + ft_strlen(src));
	else
	{
		while (dst[i])
			i++;
		ft_strlcpy(&dst[i], src, size - i);
		len = ft_strlen(src) + i;
		return (len);
	}
}
/*
int main(void)
{
	char	dest[42] = "42\t";
	char	*src = "zedr0";
	size_t	size = 9;

	// Tests
	printf("ft_strlcat('%s', '%s', %ld)\n", dest, src, size);
	ft_strlcat(dest, src, size);
	printf("dest\t=> '%s'\n", dest);
	printf("length\t=> %ld\n", ft_strlcat(dest, src, size));

	return (0);
}
*/
