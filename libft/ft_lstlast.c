/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:15:05 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/19 15:45:48 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief returns the new node of the list
/// @param lst the list you want to get the last node
/// @return the last node from lst
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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

int	main(int argc, char **argv)
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
