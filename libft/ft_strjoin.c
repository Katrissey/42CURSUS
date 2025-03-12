/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:56:58 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/12 18:20:10 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to concatenate two strings, using malloc to allocate memory
/// enough to the lenght of both string plus the terminated character '\0'
/// @param s1 is the first string to join
/// @param s2 is the second string to join
/// @return the new string or NULL if the memory allocation fails
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

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <the first string you want to join> <the second string you want to join>\n", argv[0]);
		return (1);
	}
	char	*s1 = argv[1];
	char	*s2 = argv[2];
	char	*ptr = ft_strjoin(s1, s2);
	printf("The first string to concatenate is: %s\n", s1);
	printf("The second string to concatenate is: %s\n", s2);
	printf("The new string resultant after concatenation is: %s\n", ptr);
	free(ptr);
	return (0);
}*/
