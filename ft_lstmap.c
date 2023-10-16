/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:39:01 by passunca          #+#    #+#             */
/*   Updated: 2023/10/16 11:50:12 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		n_node = ft_lstnew(f(lst->content));
		if (!n_node)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}
/*
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

void	ft_del(void *content)
{
	free(content);
}

void	*ft_42(void *content)
{
	int *val = (int *)content;
	*val = 42;
	return (content);
}

int main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*mapped;
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
	list = ft_lstnew(content_ptr);
	if (!list)
		return (1);
	i = node_n;
	while (i-- > 1)
		ft_lstadd_back(&list, ft_lstnew(content_ptr));	

	//// Test 
    printf("Testing ft_lstiter with list:\n");
    ft_print_list(list);
	printf("Applying function...\n");

	mapped = ft_lstmap(list, ft_42, ft_del);	

    printf("\nAfter applying function:\n\n");
    ft_print_list(list);

	return (0);
}
*/
