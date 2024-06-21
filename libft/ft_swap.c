/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 09:40:11 by passunca          #+#    #+#             */
/*   Updated: 2024/06/21 09:48:35 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief			Swap two strings
/// @param s1		First string
/// @param s2		Second string
/// @var tmp		Pointer to the temporary string
/// @details		- Swap two strings
void	ft_swapstrs(char **s1, char **s2)
{
	char	*tmp;

	if (!s1 || !s2)
		return ;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}
