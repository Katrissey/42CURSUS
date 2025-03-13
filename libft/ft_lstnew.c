/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:35:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/13 19:51:50 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Creates a new nodo using malloc. Initialize next as NULL.
/// @param content the variable which content is nedded to create de new nodo,
/// initialize with the content of the parameter content the functioin recibes.
/// @return The new created nodo.
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the content you want to fill content with>\n", argv[0]);
		return (1);
	}
	char	*content = argv[1];
	t_list	*new_list = ft_lstnew(content);

	if (new_list == NULL)
	{
		fprintf(stderr, "Failed to created new list element.\n");
		return (1);
	}
	printf("The memory address of the new list is: %p.\n", (void *)new_list);
	printf("The content of the new list is: %s.\n", (char *)(new_list->content));
	printf("The memory address of the next node of the new list is: %p.\n", (void *)new_list->next);
	free(new_list);
	return (0);
}*/


