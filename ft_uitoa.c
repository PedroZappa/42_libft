/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:58:55 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/27 10:47:14 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_alloc_n(char *str, int len, unsigned int n, unsigned int n_bak);

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	int				len;
	unsigned int	n_bak;

	n_bak = n;
	len = ft_numlen(n, 10);
	str = NULL;
	str = ft_alloc_n(str, len, n, n_bak);
	if (str == NULL)
		return (NULL);
	return (str);
}

static char	*ft_alloc_n(char *str, int len, unsigned int n, unsigned int n_bak)
{
	if (n_bak == 0)
		len = 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len-- > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
