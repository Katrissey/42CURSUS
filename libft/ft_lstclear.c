/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:12:17 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/21 22:22:56 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief erase the given node and all the nodes after that one
/// @param lst 
/// @param del 
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/*/// @brief to print the content of the node of a list
/// @param lst the list you want to print its contents
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

/// @brief erase the content of a node
/// @param content  the content of the node you want to erase
void	del(void *content)
{
	if (content)
		free(content);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <at least the content of 1 node>\n", argv[0]);
		return (1);
	}
	t_list	*list;
	t_list	*new_node;
	t_list	*last_node;
	int		i;

	list = ft_lstnew(argv[1]);
	if (list == NULL)
	{
		fprintf(stderr, "Failed to created new list element.\n");
		return (1);
	}
	i = 2;
	while (i < argc)
	{
		new_node = ft_lstnew(argv[i]);
		ft_lstadd_back(&list, new_node);
		printf("The new node content is: %s\n", (char *)new_node->content);
		i++;
	}
	last_node = ft_lstlast(list);
	if (last_node)
	{
		printf("The memory address of the new list is: %p.\n", (void *)list);
		printf("The last node content is: %s.\n", (char *)last_node->content);
	}
	// Print list before erasing a node
	printf("The list before erasing a node:\n");
	print_list(list);
	// Erase the node and all the next nodes
	ft_lstclear(&list, del);
	// Print list after erasing all nodes
	printf("The list after erasing all nodes:\n");
	print_list(list);
	return (0);
}*/
