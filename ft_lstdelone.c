/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:53:16 by passunca          #+#    #+#             */
/*   Updated: 2023/10/14 21:55:49 by zedr0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *list, void (*del)(void*))
{
	if (!list || !del)
		return ;
	(*del)(list->content);
	free(list);
}
/*
void	ft_del(void *content)
{
	(void)content;
}

void ft_print_list(t_list *list)
{
	size_t	i;

	printf("Print List:\n");
	i = 1;
	if (list)
	{
		printf("Node %zu\n", i);
		printf("\tValue\t\t%ld\n", (long)list->content);
		printf("\tNext Address\t%p\n", list->next);
	}
}

int main(void)
{
	t_list	*list;
	long	content;

	//// Create List
	content = 42;
	list = ft_lstnew((void *)content);
	if (!list)
		return (1);

	//// Print List
	ft_print_list(list);

	printf("\n");
	ft_lstdelone(list, &ft_del);
	//// Uncomment to check the result of ft_lstdelone()
	//// valgrind will wine
	ft_print_list(list);

	return (0);
}
*/
