/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:57:58 by passunca          #+#    #+#             */
/*   Updated: 2024/02/02 12:07:11 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/* Error Handling Functions */

/*	ft_perror : Write a string to STDERR
 *
 *	*/
int	ft_perror(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(STDERR_FILENO, str, len);
	return (len);
}
/*	ft_p_color : Write a string to STDIN with a color
*
*	*/
int	ft_pout_color(char *str, char *color)
{
	write(STDOUT_FILENO, color, ft_strlen(color));
	write(STDOUT_FILENO, str, ft_strlen(str));
	write(STDOUT_FILENO, NC, ft_strlen(NC));
	return (ft_strlen(str) + ft_strlen(color) + ft_strlen(NC));
}

/*	ft_perror_color : Write a string to STDERR with a color
*
*	*/
int	ft_perror_color(char *str, char *color)
{
	write(STDERR_FILENO, color, ft_strlen(color));
	write(STDERR_FILENO, str, ft_strlen(str));
	write(STDERR_FILENO, NC, ft_strlen(NC));
	return (ft_strlen(str) + ft_strlen(color) + ft_strlen(NC));
}
