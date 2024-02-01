/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rgb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:10:07 by passunca          #+#    #+#             */
/*   Updated: 2024/02/01 19:22:02 by passunca         ###   ########.fr       */
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
int		ft_rgb(int red, int green, int blue)
{
	return (red << 16 | green << 8 | blue);
}
