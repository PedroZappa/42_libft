/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:33:56 by passunca          #+#    #+#             */
/*   Updated: 2024/06/20 16:35:59 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief			Join two strings and free 
/// @param s1		First string
/// @param s2		Second string
/// @var new		Pointer to the new string
/// @return			Pointer to the new string
/// @details		- Join two strings
///					- Free the first string
///					- Free the second string
char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*new;

	if (!s1 || !s2)
		return (NULL);
	new = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (new);
}

