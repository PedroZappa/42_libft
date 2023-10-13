/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:47:32 by passunca          #+#    #+#             */
/*   Updated: 2023/10/13 08:56:07 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;	

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int main(int argc, char *argv[])
{
	t_list	*node;
	char	*content;

	if (argc != 2)
	{
		printf("Usage: %s <string>\n", argv[0]);
		return (0);
	}
	content = argv[1];
	
	node = ft_lstnew(content);
	if (node)
	{
		printf("ft_lstnew(\"%s\") returns:\n", content);
		printf("node:\n");
		printf("\tAddress: %p\n", node);

		printf("node->content:\n");
		printf("\tAddress: %p\n", node->content);
		printf("\tValue :\t\"%s\"\n", (char *) node->content);

		printf("node->next:\n");
		printf("\tAddress: %p\n", node->next);
	}
	else 
	{
		printf("node is NULL");
	}

	// Free Memory
	free(node);
}

