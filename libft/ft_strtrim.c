/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:05:42 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:10:06 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to remove the set from the start and end of the string
/// @param s1 is the string
/// @param set is the set of characters to remove
/// @return the pointer to the new string
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	s1_len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = s1_len;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = ft_substr(s1, start, end - start);
	return (ptr);
}

/*int	main(void)
{
	char	*ptr;

	ptr = ft_strtrim("   ¡Adoro 42!   ", " ");
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
