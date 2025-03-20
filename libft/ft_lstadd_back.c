/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:38:52 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/20 17:46:40 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Adds the new nodo at the end of the list "lst"
/// @param lst is the list you want to add new node at its end
/// @param new is the new node created to add it to the end of "lst"
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			temp = *lst;
			while (temp->next)
				temp = temp->next;
			temp->next = new;
		}
	}
}

/*void	free_list(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
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
	free_list(list);
	return (0);
}*/
