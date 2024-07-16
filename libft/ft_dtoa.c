/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 16:18:18 by passunca          #+#    #+#             */
/*   Updated: 2024/02/12 10:54:26 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_parse_double(double d, char *numstr, long i);
static int	ft_getlen(long *int_part);

/// @brief		Converts a double to a string
/// @param d	double to convert
/// @return		SUCCESS(char*)
/// @return		FAILURE(NULL)
char	*ft_dtoa(double d)
{
	long	i;
	char	*numstr;

	i = 0;
	numstr = malloc(sizeof(char) * 64);
	if (!numstr)
		return (NULL);
	if (d < 0.0)
	{
		numstr[i++] = '-';
		if ((d > -1.0) && (d < 0.0))
			numstr[i++] = '0';
		d *= -1;
	}
	else if ((d >= 0) && (d < 1.0))
		numstr[i++] = '0';
	ft_parse_double(d, numstr, i);
	return (numstr);
}

/// @brief			Converts a double to a string
/// @param d		double to convert
/// @param numstr	string to store the result
/// @param i		iterator
static void	ft_parse_double(double d, char *numstr, long i)
{
	long	int_part;
	long	len;
	long	bak;
	long	curr_char;

	int_part = (long)d;
	d -= int_part;
	len = ft_getlen(&int_part);
	while (len > 0)
	{
		bak = ft_pow(10, (len - 1));
		curr_char = (int_part / bak);
		numstr[i++] = (curr_char + '0');
		int_part %= bak;
		--len;
	}
	numstr[i++] = '.';
	while (len++ < PRECISION)
	{
		d *= 10.0;
		bak = d;
		numstr[i++] = (bak + '0');
		d -= bak;
	}
	numstr[i] = '\0';
}

/// @brief			Computes the length of the integer
/// @param int_part	Pointer to a long integer
/// @return			Length of the integer
static int	ft_getlen(long *int_part)
{
	long	maxlen;
	long	len;
	long	m;

	maxlen = PRECISION;
	while (maxlen >= 0)
	{
		len = ft_pow(10, maxlen);
		m = *int_part / len;
		if (m > 0)
			break ;
		--maxlen;
	}
	len = (maxlen + 1);
	return (len);
}
/*
int	main(int argc, char **argv)
{
	double	d;

	if (argc == 2)
		d = atof(argv[argc - 1]);
	else
	{
		printf("Usage: %s [d]\n", argv[0]);
		return (0);
	}
	printf("atof(d) => %f\n", d);
	printf("ft_dtoa(d) => %s\n", ft_dtoa(d));
	return (0);
}
*/
