/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 18:07:57 by passunca          #+#    #+#             */
/*   Updated: 2024/02/12 18:20:16 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		get_digit(char c, int base_len);
static char		to_lower(char c);
static int		is_digit(char c);
static int		is_hexalpha(char c);

/*	ASCII to integer conversion
 *
 *	Handle sign
 *	While get_digit() returns 0 or positive integer
 *		Convert to integer:
 *			Multiply 'num' by base and add 'digit' multiplied by the sign
 *	return 'num'
 *	*/
/// @brief			Converts a string to an integer
/// @param str		string to convert
/// @param str_base	base
/// @return			SUCCESS(integer)
int	ft_atoi_base(const char *str, int str_base)
{
	int	digit;
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		++str;
	}
	digit = get_digit(to_lower(*str++), str_base);
	while (digit >= 0)
	{
		num = ((num * str_base) + (digit * sign));
		digit = get_digit(to_lower(*str++), str_base);
	}
	return (num);
}

/*	Gets digit from character
 *
 *  Set 'base_ascii'
 *	if 'base_len' smaller or equal to 10:
 *		set 'base_ascii' to (base_len + '0')
 *	else
 *		set 'base_ascii' to ((base_len - 10) + 'a')
 *
 *  Check if 'c' is digit or letter
 *	if 'c' is a digit AND smaller than 'base_ascii':
 *		return (c - '0')
 *	else if 'c' is a letter AND smaller than 'base_ascii':
 *		return ((c + 10) - 'a')
 *	else
 *		return (-1)
 *	*/
/// @brief				Converts a character to an integer
/// @param c			character to convert
/// @param base_len		base to convert to	
/// @return				SUCCESS(integer)
/// @return				FAILURE(-1)
static int	get_digit(char c, int base_len)
{
	int	base_ascii;

	if (base_len <= 10)
		base_ascii = (base_len + '0');
	else
		base_ascii = ((base_len - 10) + 'a');
	if (is_digit(c) && (c <= base_ascii))
		return (c - '0');
	else if (is_hexalpha(c) && (c <= base_ascii))
		return ((c + 10) - 'a');
	else
		return (-1);
}

/// @brief		Converts a character to lowercase
/// @param c	character to convert
/// @return		SUCCESS(lowercase character)
/// @return		FAILURE(c)
static char	to_lower(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + ('a' - 'A'));
	return (c);
}

/// @brief		Checks if character is a digit
/// @param c	character to check
/// @return		SUCCESS(1)
/// @return		FAILURE(0)
static int	is_digit(char c)
{
	return ((c >= '0') && (c <= '9'));
}

/// @brief		Checks if character is a hexalpha
/// @param c	character to check
/// @return		SUCCESS(1)
/// @return		FAILURE(0)
static int	is_hexalpha(char c)
{
	return (((c >= 'a') && (c <= 'f')) || ((c >= 'A') && (c <= 'F')));
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num;
	int base;

	(void) argc;
	if (argc != 3)
		return (1);
	printf("%s\n", argv[1]);
	base = atoi(argv[2]);
	num = ft_atoi_base(argv[1], base);
	printf("%d\n", num);
	return (0);
}
*/
