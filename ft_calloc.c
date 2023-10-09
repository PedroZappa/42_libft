/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:57:51 by passunca          #+#    #+#             */
/*   Updated: 2023/10/09 11:46:01 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	to_alloc;

	to_alloc = (nmemb * size);
	ptr = malloc(sizeof(char) * to_alloc);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, to_alloc);
	return (ptr);
}
