/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:56:55 by passunca          #+#    #+#             */
/*   Updated: 2023/10/13 13:08:56 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int main(int argc, char *argv[])
{
	t_list	*node;
	size_t	node_n;
	long	content;
	size_t	i;

	if (argc != 3)
	{
		printf("Usage: %s <content> <node_n>\n", argv[0]);
		return (1);
	}
	content = ft_atoi(argv[1]);
	node_n = ft_atoi(argv[2]);
	//// Create List
	node = ft_lstnew(&content);
	if (!node)
		return (1);
	i = node_n;
	while (i--)
	{
		++content;
		printf("%ld\n", content);
		ft_lstadd_back(&node, ft_lstnew(&content));	
	}

	//// Print List
	printf("Print List:\n");
	i = 1;
	while (node->next)
	{
		printf("Node %zu : %ld\n", i, (long)node->content);
		printf("Address %p\n", node->next);
		node = node->next;
		++i;
	}

	return (0);
}

