/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:57:51 by passunca          #+#    #+#             */
/*   Updated: 2023/10/09 10:25:57 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	to_alloc;

	to_alloc = (nmemb * size);
	ptr = (char *)malloc(sizeof(char) * to_alloc);
	if (!ptr)
		return (NULL);
	while (--size >= 0)
		ptr[size] = '\0';
	return ((void *)ptr);
}
