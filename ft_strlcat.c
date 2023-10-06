/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:55:28 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/06 18:39:19 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
