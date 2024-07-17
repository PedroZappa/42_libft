/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:10:00 by passunca          #+#    #+#             */
/*   Updated: 2023/10/16 11:23:56 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief			Applies the function f to the content of each node
/// @param lst		Pointer to the list
/// @param f		Pointer to the function to apply
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		if (lst->content)
			f(lst->content);
		lst = lst->next;
	}
}
/*
void ft_add42(void *content)
{
	int *val = (int *)content;
	*val = 42;
}

void ft_print_list(t_list *node)
{
	size_t	i;

	printf("====> Print List:\n");
	printf("Root node's Address:\n\t%p\n", node);
	i = 1;
	while (node)
	{
		printf("Node %zu\n", i);
		if (node->content)
			printf("\tValue\t%d\n", (*(int *)(node->content)));
		else
			printf("\tValue\tNULL\n");
		printf("\tNext Address %p\n", node->next);
		node = node->next;
		++i;
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	t_list	*node;
	size_t	node_n;
	int		content;
	size_t	i;

	if (argc != 3)
	{
		printf("Usage: %s <content> <node_n>\n", argv[0]);
		return (1);
	}
	content = ft_atoi(argv[1]);
	node_n = ft_atoi(argv[2]);
	
	//// Create List
	int *content_ptr = malloc(sizeof(int));
	*content_ptr = content;
	node = ft_lstnew(content_ptr);
	if (!node)
		return (1);
	i = node_n;
	while (i-- > 1)
		ft_lstadd_back(&node, ft_lstnew(content_ptr));	

	//// Test 
    printf("Testing ft_lstiter with list:\n");
    ft_print_list(node);
	printf("Applying function...\n");
    ft_lstiter(node, &ft_add42);
    printf("\nAfter applying function:\n\n");
    ft_print_list(node);

	return (0);
}
*/
