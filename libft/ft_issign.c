/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:32:05 by passunca          #+#    #+#             */
/*   Updated: 2024/05/07 15:32:19 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief		Checks if character is a sign
/// @param c	character to check
/// @return		if c == '-' -> -1
/// @return		if c == '+' -> 1
/// @return		otherwise -> 0
int	ft_issign(char c)
{
	if (c == '-')
		return (-1);
	else if (c == '+')
		return (1);
	else
		return (0);
}
