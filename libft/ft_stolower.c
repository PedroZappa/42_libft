/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:02:32 by passunca          #+#    #+#             */
/*   Updated: 2024/02/04 11:06:49 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*	Converts a string to lowercase.
 *	*/
char	*ft_stolower(char *str)
{
	while (*str)
	{
		if (ft_isupper(*str))
			*str += 32;
		++str;
	}
	return (str);
}
