/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:56:58 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:08:42 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to concatenate two strings
/// @param s1 is the first string
/// @param s2 is the second string
/// @return the pointer to the new string
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, s1_len);
	ft_memcpy(ptr + s1_len, s2, s2_len);
	ptr[s1_len + s2_len] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*ptr;

	ptr = ft_strjoin("¡Adoro ", "42!");
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
