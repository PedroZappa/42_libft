/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:10:07 by passunca          #+#    #+#             */
/*   Updated: 2024/02/01 19:51:47 by passunca         ###   ########.fr       */
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
int		ft_argb(int alpha, int red, int green, int blue)
{
	return (alpha << 24 | red << 16 | green << 8 | blue);
}

/*	get_alpha / get_red / get_green / get_blue
 *		Extract integer values from a encoded ARGB integer;
 *
 *	*/
int	ft_get_alpha(int argb)
{
	return ((argb >> 24) & 0xFF);
}

int	ft_get_red(int argb)
{
	return ((argb >> 16) & 0xFF);
}

int	ft_get_green(int argb)
{
	return ((argb >> 8) & 0xFF);
}

int	ft_get_blue(int argb)
{
	return (argb & 0xFF);
}

