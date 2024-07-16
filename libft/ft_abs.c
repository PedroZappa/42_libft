/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:11:11 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 17:39:57 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief		returns the absolute value of an integer
/// @param	n
/// @return		absolute value of n
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
