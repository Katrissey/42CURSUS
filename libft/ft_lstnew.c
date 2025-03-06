/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:35:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/06 16:52:23 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Creates a new nodo using malloc(3)--> normalli we use sizeof(t_list),
/// in this case, y use 3 as the size of the "t_list" type of data.
/// @param content the variable which content is nedded to create de new nodo
/// @return The new created nodo
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if(!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int	main(void)
{
	t_list	*new_list;
	int	*numb = 42;
	new_list = ft_lstnew((void *)numb);
	printf("The memory address of the new list is: %p.\n", new_list);
	printf("The content of the new list is: %d.\n", new_list->content);
	printf("The next direction of the new list is: %p.\n", new_list->next);
	return (0);
}*/


