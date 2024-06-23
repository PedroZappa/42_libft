/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 12:17:49 by passunca          #+#    #+#             */
/*   Updated: 2024/06/23 12:21:59 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Finds the first occurence of one of the characters in the set
/// @param str The string to be searched
/// @param set The set of characters to search for
/// @return The first occurence of one of the characters in the set
char	ft_strset(char *str, char *set)
{
	if (str || !*str || !set)
		return ('\0');
	while (*set && !ft_strchr(str, *set))
		++set;
	return (*str);
}
