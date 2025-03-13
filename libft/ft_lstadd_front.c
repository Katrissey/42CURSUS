/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:28:20 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/13 22:22:19 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Adds new node to the top of the list (you must assigne
/// the memory direction of the header to the new node of the list)
/// @param lst the memory direccion of the pointer which ponters to
/// the first node of a list: the header os that list
/// @param new a pointer to the new node to include into the list
/// at the begining of that list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <content for head_node> <content for new_node>\n", argv[0]);
		return (1);
	}
	char	*content_head_node = argv[1];
	char	*content_new_node = argv[2];
	t_list	*head = ft_lstnew(content_head_node);
	t_list	*new_node = ft_lstnew(content_new_node);

	if (!head || !new_node)
	{
		fprintf(stderr, "Failed to created new list element\n");
		if (head)
			free(head);
		if (new_node)
			free(new_node);
		return (1);
	}
	printf("The memory address of the head node BEFORE calling ft_lstadd_front is: %p, and its content is: %s\n", (void *)head, (char *)head->content);
	printf("The memory address of the NEW node BEFORE calling ft_lstadd_front is: %p, and its content is: %s\n", (void *)new_node, (char *)new_node->content);

	ft_lstadd_front(&head, new_node);
	printf("The memory address of the head node after calling ft_lstadd_front is: %p, and its content is: %s\n", (void *)head, (char *)head->content);
	printf("The memory address of the NEW node after calling ft_lstadd_front is: %p, and its content is: %s\n", (void *)new_node, (char *)new_node->content);
	
	free(head->next);
	free(new_node);
	return (0);
}*/
