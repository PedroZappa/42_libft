/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:16:02 by passunca          #+#    #+#             */
/*   Updated: 2024/02/03 22:17:04 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief		Checks if character is a space
/// @param c	character to check
/// @return		SUCCESS(1)
/// @return		FAILURE(0)
int	ft_isspace(int c)
{
	return ((c == ' ') || ((c >= 9) && (c <= 13)));
}
