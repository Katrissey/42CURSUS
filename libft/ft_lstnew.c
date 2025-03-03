/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 18:35:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/03 19:23:12 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Creates a new nodo using malloc(3)--> normalli we use sizeof(t_list),
/// in this case, y use 3 as the size of the "t_list" type of data.
/// @param content the variable which content is nedded to create de new nodo
/// @return The new created nodo
t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = (t_list *)malloc(3);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);
}
