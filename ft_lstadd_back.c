/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:00:06 by passunca          #+#    #+#             */
/*   Updated: 2023/10/13 11:20:03 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
}
/*
int main(int argc, char *argv[])
{
	t_list	*node;
	t_list	*back_node;
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
	back_node = ft_lstnew(content2);
	if (!back_node)
		return (1);
	ft_lstadd_back(&node, back_node);
	
	// Print List
	printf("Printing List :\n");
	node_n = 1;
	while (node)
	{
		printf("node %zu:\t\t\"%p\"\n", node_n, node);
		printf("\t->content: \"%s\"\n", (char *) node->content);
		printf("\t->next: \"%p\"\n", (char *) node->next);
		node = node->next;
		++node_n;
	}
	return (0);
}
*/
