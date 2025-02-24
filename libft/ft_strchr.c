/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:40:54 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/24 20:01:58 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief the strchr() function locates the first occurrence of c
///(converted to a char) in the string pointed to by s.
///The terminating null character is considered to be part
///of the string; therefore if c is `\0`, the functions locate
///the terminating `\0`.
/// @param s is the string to be searched.
/// @param c is the character to be located.
/// @return the strchr() function returns a pointer to
///the located character, or NULL if the character does not appear
///in the string.
char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <string> <character to search in the string>\n", argv[0]);
		return (1);
	}
	const char	*str = argv[1];
	char		c = argv[2][0];
	char		*ptrft = ft_strchr(str, c);
	char		*ptro = strchr(str, c);
	
	printf("The string in which to search is %s.\n", str);
	printf("The character to find is %c.\n", c);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with strchr is %s.\n", ptro);
	printf("The pointer memory direction with ft is %p.\n", ptrft);
	printf("The pointer memory direction with strchr is %p.\n", ptro);
	return (0);
}*/
