/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:31:27 by passunca          #+#    #+#             */
/*   Updated: 2023/10/06 11:49:46 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	if (size > 0)
	{
		i = 0;
		while (*(src + i) && (i < (size - 1)))
		{
			*(dest + i) = *(src + i);
			++i;
		}
		*(dest + i) = '\0';
	}
	return (ft_strlen(src));
}
