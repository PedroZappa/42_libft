/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:46:08 by passunca          #+#    #+#             */
/*   Updated: 2024/02/11 17:40:45 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief		Compares string s1 and s2
/// @param s1	Pointer to the first string
/// @param s2	Pointer to the second string
/// @return		SUCCESS(0)
/// @return		FAILURE(Lexicographical difference)
int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (s1[i] && s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
