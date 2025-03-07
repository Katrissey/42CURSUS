/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:48:51 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 21:08:28 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to duplicate a string
/// @details Obtain the memory for the new string with malloc() and
/// can be freed with free()
/// @param s1 is the string to duplicate
/// @return the pointer to the new string, which is a duplicate of the string "s".
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

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the string you want to duplicate>\n", argv[0]);
		return (1);
	}
	const char	*s1 = argv[1];
	char	*ptr = ft_strdup(s1);
	printf("The string to copy is: %s.\n", s1);
	printf("The string just copied is: %s.f \n", ptr);
	free(ptr);
	return (0);
}*/
