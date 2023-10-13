/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:15:18 by passunca          #+#    #+#             */
/*   Updated: 2023/10/13 10:48:51 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		lst = lst->next;
		++count;
	}
	return (count);
}
/*
int main(int argc, char *argv[])
{
	t_list	*node;
	size_t	node_n;
	char	*content;
	size_t	lst_size;
	
	if (argc != 3)
	{
		printf("Usage: %s <content> <lst_size>\n", argv[0]);
		return (1);
	}
	content = argv[1];
	lst_size = ft_atoi(argv[2]);

	// Create List
	node = ft_lstnew(content);
	if (!node)
		return (1);
	while (--lst_size)
		ft_lstadd_back(&node, ft_lstnew(content));

	// Count List Size
	node_n = ft_lstsize(node);
	printf("List Size: %zu\n", node_n);
}
*/
