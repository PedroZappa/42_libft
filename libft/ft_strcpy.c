/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:13:31 by passunca          #+#    #+#             */
/*   Updated: 2024/07/03 15:27:42 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//
// int main(int argc, char **argv)
// {
// 	char *dest = "Zedro";
// 	char *src = NULL;
// 	char *ret = NULL;
// 	
// 	ret = ft_strcpy(dest, src);
// 	printf("ret => '%s'\n", ret);
// 	return (0);
// }
