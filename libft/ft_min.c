/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:25:13 by passunca          #+#    #+#             */
/*   Updated: 2024/04/16 16:25:31 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief			Returns the minimum of two integers
/// @param a		First integer
/// @param b		Second integer
/// @return			Minimum of a and b
int	ft_min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}
