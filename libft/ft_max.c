/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:25:59 by passunca          #+#    #+#             */
/*   Updated: 2024/04/16 16:26:11 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief			Returns the maximum of two integers
/// @param a		First integer
/// @param b		Second integer
/// @return			Maximum of a and b
int	ft_max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
