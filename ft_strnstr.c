/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zedr0 <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 17:35:30 by zedr0             #+#    #+#             */
/*   Updated: 2023/10/21 15:53:25 by zedro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && len == 0)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && (i + j) < len)
		{
			if (!little[j + 1])
				return ((char *)(big + i));
			++j;
		}
		++i;
	}
	return (NULL);
}
/*
int main(int argc, char *argv[])
{
	char	*big; 
	char	*little;
	char	*result;
	size_t	len;

	if (argc != 4)
	{
		printf("Usage: %s big little len\n", argv[0]);
		return (0);
	}
	big = argv[1];
	little = argv[2];
	len = ft_atoi(argv[3]);
	result = ft_strnstr(big, little, len);
	
	printf("big : \'%s\'\tlittle: \'%s\'\tlen: %lu\n", big, little, len);
	printf("Address of first char in big :\n\'%p\'\n", big);
	
	if (!result)
		printf("\'%s\' is not in any %lu bytes of \'%s\'\n", little, len, big);
	else
		printf("\'%s\' exists in \'%s\'\n", result, big);
	printf("Address of first char in result :\n\'%p\'\n", result);

	return (0);
}
*/
