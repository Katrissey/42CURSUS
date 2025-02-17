/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:48:51 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:09:07 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to duplicate a string
/// @param s1 is the string to duplicate
/// @return the pointer to the new string
char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	return (ptr);
}

/*int	main(void)
{
	char	*ptr;

	ptr = ft_strdup("¡Adoro 42!");
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
