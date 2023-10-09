/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:32:54 by passunca          #+#    #+#             */
/*   Updated: 2023/10/09 19:28:17 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s)
{
	size_t len;
	char *dst;

	len = ft_strlen(s);
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s, len);
	return (dst);
}
