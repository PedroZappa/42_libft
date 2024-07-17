/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:21:20 by passunca          #+#    #+#             */
/*   Updated: 2023/10/14 22:09:08 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief			Frees all nodes and contents of a given list
/// @param lst		Pointer to the list
/// @param del		Pointer to the function used to delete the content
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
void	ft_del(void *content)
{
	(void)content;
}

void ft_print_list(t_list *node)
{
	size_t	i;

	printf("Print List:\n");
	i = 1;
	while (node->next)
	{
		printf("Node %zu\n", i);
		printf("\tValue\t%ld\n", (long)node->content);
		printf("\tAddress %p\n", node->next);
		node = node->next;
		++i;
	}
	printf("Node %zu\n", i);
	printf("\tValue\t%ld\n", (long)node->content);
	printf("\tNext Address %p\n", node->next);
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
	node = ft_lstnew((void *)content);
	if (!node)
		return (1);
	i = node_n;
	while (i-- > 1)
		ft_lstadd_back(&node, ft_lstnew((void *)++content));	

	//// Print List
	ft_print_list(node);

	//// Clear List
	printf("\nClearing List...\n\n");
	ft_lstclear(&node, &ft_del);
	printf("List is cleared...\n\n");

	//// Uncomment to check the result of ft_lstclear()
	//// valgrind will wine
	if (node)
		printf("node is not NULL\n");
	else
		printf("node is NULL\n");

	return (0);
}
*/
