/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:10:00 by passunca          #+#    #+#             */
/*   Updated: 2023/10/15 19:46:37 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	long *val = (long *)content;
	*val += 42;
}

void ft_print_list(t_list *node)
{
	size_t	i;

	printf("Print List:\n");
	i = 1;
	while (node)
	{
		printf("Node %zu\n", i);
		if (node->content)
			printf("\tValue\t%ld\n", (long)node->content);
		else
			printf("\tValue\tNULL\n");
		printf("\tAddress %p\n", node->next);
		node = node->next;
		++i;
	}
	printf("\n");
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
	long *content_ptr = malloc(sizeof(long));
	*content_ptr = content;
	node = ft_lstnew((void *)content);
	if (!node)
		return (1);
	i = node_n;
	while (i-- > 1)
		ft_lstadd_back(&node, ft_lstnew((void *)++content));	

	//// Test 
    printf("Testing ft_lstiter with list:\n");
    ft_print_list(node);
	printf("Applying function...\n");
    ft_lstiter(node, ft_add42);
    printf("After applying function:\n");
    ft_print_list(node);

	return (0);
}
*/
