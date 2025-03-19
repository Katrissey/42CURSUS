/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:15:05 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/19 12:33:58 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main(int argc, char **argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <at least the content of 2 nodes>\n", argv[0]);
		return (1);
	}
	t_list	*list;
	t_list	*new_node;
	t_list	*last_node;
	int		i;

	list = ft_lstnew(argv[1]);
	i = 2;
	while (i < argc)
	{
		new_node = ft_lstnew(argv[i]);
		ft_lstadd_back(&list, new_node);
		i++;
	}
	last_node = ft_lstlast(list);
	if (last_node)
		printf("The last node content is: %s.\n", (char *)last_node->content);
	return (0);
}*/
