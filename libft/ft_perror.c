/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:57:58 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 17:39:41 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/// @brief			Write a string to STDERR
/// @param str		string to write
/// @return			SUCCESS(length of the string)
int	ft_perror(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(STDERR_FILENO, str, len);
	return (len);
}

/// @brief			Write a string to STDERR and exit
/// @param str		string to write
/// @return			EXIT_FAILURE
int	ft_perror_exit(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(STDERR_FILENO, str, len);
	exit(EXIT_FAILURE);
}

/// @brief			Write a string to STDOUT with a color
/// @param str		string to write
/// @param color	color string
/// @return			length of the string
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
/// @brief			Write a string to STDERR with a color
/// @param str		string to write
/// @param color	color string
/// @return			length of the string
int	ft_perror_color(char *str, char *color)
{
	write(STDERR_FILENO, color, ft_strlen(color));
	write(STDERR_FILENO, str, ft_strlen(str));
	write(STDERR_FILENO, NC, ft_strlen(NC));
	return (ft_strlen(str) + ft_strlen(color) + ft_strlen(NC));
}
