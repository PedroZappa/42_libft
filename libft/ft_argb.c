/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:10:07 by passunca          #+#    #+#             */
/*   Updated: 2024/02/02 12:08:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	ft_rgb : Create a color quick and dirty from RGB values
 *			(w/out accounting for endianness)
 *
 *	(red << 16) : Shifts the bits of the red value to the left by 16 bits
 *				This places the red value in the most significant bits of the
 *				color value to be returned;
 *	(green << 8) : Shifts the bits of the green value to the left by 8 bits
 *				This places the green value in the middle bits of the color
 *				value to be returned:
 *	(red << 16 | green << 8 | blue) : Combines the shifted values of red, green,
 *				and blue. this operation concatenated the bits of the shiftend
 *				values with the bits of blue;
 *	*/
/// @brief			Create a color from RGB values 
/// @param	red		Red value
/// @param	green	Green value
/// @param	blue	Blue value
int	ft_argb(int alpha, int red, int green, int blue)
{
	return (alpha << 24 | red << 16 | green << 8 | blue);
}

/*	get_alpha / get_red / get_green / get_blue
 *		Extract integer values from a encoded ARGB integer;
 *
 *	*/
/// @brief			Extract transparency value from a encoded ARGB integer
/// @param	argb	ARGB integer
/// @return			Transparency value
int	ft_get_alpha(int argb)
{
	return ((argb >> 24) & 0xFF);
}

/// @brief			Extract red value from a encoded ARGB integer
/// @param	argb	ARGB integer
/// @return			Red value
int	ft_get_red(int argb)
{
	return ((argb >> 16) & 0xFF);
}

/// @brief			Extract green value from a encoded ARGB integer
/// @param	argb	ARGB integer
/// @return			Green value
int	ft_get_green(int argb)
{
	return ((argb >> 8) & 0xFF);
}

/// @brief			Extract blue value from a encoded ARGB integer
/// @param	argb	ARGB integer
/// @return			Blue value
int	ft_get_blue(int argb)
{
	return (argb & 0xFF);
}
