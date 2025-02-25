/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:48:34 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/25 14:37:24 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief the ft_strrchr() function locates the last occurrence
///of c (converted to a char) in the string pointed to by s.
///The terminating null character is considered to be part of the string;
///therefore if c is `\0`, the functions locate the terminating `\0`.
/// @param s is the string to search in.
/// @param c is the character to find.
/// @return the pointer to the located character, or NULL if the character
///is not found.
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		ptr = (char *)s;
	return (ptr);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <string> <character to search in the string>\n", argv[0]);
		return(1);
	}
	const char	*str = argv[1];
	char		c = argv[2][0];
	char		*ptrft = ft_strrchr(str, c);
	char		*ptro = strrchr(str, c);
	
	printf("The string in which to search is %s.\n", str);
	printf("The character to find is %c.\n", c);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with strchr is %s.\n", ptro);
	printf("The pointer memory direction with ft is %p.\n", ptrft);
	printf("The pointer memory direction with strchr is %p.\n", ptro);
	return (0);
}*/
