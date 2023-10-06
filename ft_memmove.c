/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 09:42:59 by passunca          #+#    #+#             */
/*   Updated: 2023/10/06 10:17:22 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pd;
	const char	*ps;

	if (!dest && !src)
		return (dest);
	pd = dest;
	ps = src;
	if (pd < ps)
		while (n--)
			*(pd++) = *(ps++);
	else
	{
		pd += n;
		ps += n;
		while (n--)
			*(--pd) = *(--ps);
	}
	return (dest);
}
