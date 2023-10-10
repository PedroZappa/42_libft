/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 20:01:54 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/10 20:26:35 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strrev(char *str)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		++start;
		--end;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		remainder;
	size_t	i;

	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	i = 0;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i++] = '\0';
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		remainder = n % 10;
		if (remainder > 9)
			str[i++] = (remainder - 10) + 'a';
		else
			str[i++] = remainder + '0';
		n /= 10;
	}
	if (sign == 1)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
