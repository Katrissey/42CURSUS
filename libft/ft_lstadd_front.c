/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 19:28:20 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/03 19:53:15 by rocgarci         ###   ########.fr       */
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
	t_list	*new_node;

	new_node = new;
	*lst = new_node;
}
