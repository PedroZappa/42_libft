/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:21:46 by passunca          #+#    #+#             */
/*   Updated: 2023/10/13 10:09:29 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main(int argc, char *argv[])
{
	t_list	*node;
	t_list	*front_node;
	char	*content1;
	char	*content2;
	size_t	node_n;

	if (argc != 3)
	{
		printf("Usage: %s <content1> <content2>\n", argv[0]);
		return (1);
	}
	content1 = argv[1];
	content2 = argv[2];

	node = ft_lstnew(content1);
	if (!node)
		return (1);
	front_node = ft_lstnew(content2);
	if (!front_node)
		return (1);
	ft_lstadd_front(&node, front_node);
	
	// Print List
	printf("Printing List :\n");
	node_n = 1;
	while (node)
	{
		printf("node %zu:\n", node_n);
		printf("\t->content: \"%s\"\n", (char *) node->content);
		printf("\t->next: \"%p\"\n", (char *) node->next);
		node = node->next;
		++node_n;
	}

	// Free Memory
	// free(front_node);
	// free(node);
	return (0);
}
*/
