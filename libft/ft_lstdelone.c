/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:55:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/21 19:34:09 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief erase memory from the content of a node first,
/// and the memory of the node itself lalter
/// @param lst the pointer of the node you want to erase its content
/// @param del the function to use to erase the memory of the node content
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
		lst = NULL;
	}
}

/*void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

/// @brief erase the content of a node
/// @param content the content of a node is sent as parameter
void	del(void *content)
{
	if (content)
		free(content);
}

int	main(int argc, char *argv[])
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <content of node 1> <content of node 2> <content of node 3>\n", argv[0]);
		return (1);
	}
	// Create nodes
	node1 = ft_lstnew(strdup(argv[1]));
	node2 = ft_lstnew(strdup(argv[2]));
	node3 = ft_lstnew(strdup(argv[3]));
	if (!node1 || !node2 || !node3)
	{
		fprintf(stderr, "Failed to created new list elements.\n");
		return (1);
	}
	printf("The node 1 content is: %s\n", (char *)node1->content);
	printf("The node 2 content is: %s\n", (char *)node2->content);
	printf("The node 3 content is: %s\n", (char *)node3->content);
	// Create linked list
	list = node1;
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	// Print list before erasing a node
	printf("The list before erasing a node:\n");
	print_list(list);
	// Update the next pointer of node1 before erasing node2
	node1->next = node3;
	// Erasing the second node
	ft_lstdelone(node2, del);
	// Print list after erasinig the second node
	printf("The list after eraising the second node is:\n");
	print_list(list);
	// Free remain memory
	ft_lstdelone(node1, del);
	ft_lstdelone(node3, del);
	return (0);
}*/
