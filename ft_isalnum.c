/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:24:17 by passunca          #+#    #+#             */
/*   Updated: 2023/10/03 15:56:03 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_isalpha.c"
#include "ft_isdigit.c"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (c);
	else 
		return (0);
}
