/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 11:51:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/19 12:10:52 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s, <at least the content of 2 nodes>", argv[0]);
		return (1);
	}
	t_list	*list;
	t_list	*new_node;
	int		i;

	list = ft_lstnew(argv[1]);
	i = 2;
	while (i < argc)
	{
		new_node = ft_lstnew(argv[i]);
		ft_lstadd_back(&list, new_node);
		i++;
	}
	printf("The size of the list is: %d.\n", ft_lstsize(list));
	return (0);
}*/
