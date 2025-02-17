/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:52:50 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 02:54:51 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to create a substring from a string
/// @param s is the string
/// @param start is the index to start the substring
/// @param len is the length of the substring	
/// @return the pointer to the new string
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len < len)
		len = s_len;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s + start, len);
	ptr[len] = '\0';
	return (ptr);
}

/*int	main(void)
{
	char	*ptr;

	ptr = ft_substr("Hello World!", 6, 5);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
