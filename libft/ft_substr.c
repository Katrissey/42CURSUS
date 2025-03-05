/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:52:50 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/05 19:29:05 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to create a substring from a string, creating an allocation memory
/// area with malloc for that substring you create from "s". The substring
/// begins from the strat index and its maximun length is "len"
/// @param s is the string you want a substring from
/// @param start is the index to start the substring
/// @param len is the maximum length of the substring	
/// @return the pointer to the new substring
/// or NULL if the allocation memory fails
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

/*int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <the string you want a subtring from> \
		<the index to start the substring> <the length of the substring you want>", argv[0]);
		return (1);
	}

	const char		*s = argv[1];
	unsigned int	start = strtoul(argv[2], NULL, 10);
	size_t			len = strtoul(argv[3], NULL, 10);

	if (start == 0 && argv[2][0] != '0')
	{
		fprintf(stderr, "%s is not a number or is an invalid number to use as index to start the substring.\n", argv[2]);
		return (1);
	}
	if (len == 0 && argv[3][0] != '0')
	{
		fprintf(stderr, "%s is not a number or is an invalid number to stablish the length of the substring.\n", argv[3]);
		return (1);
	}
	
	char	*ptr = ft_substr(s, start, len);

	if (!ptr)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (1);
	}

	printf("The inicial string is: %s\n", s);
	printf("The index to start the substring is: %d\n", start);
	printf("The maximum length of the resultant substring is: %zu\n", len);
	printf("The resulltant substring is: %s\n", ptr);
	printf("The pointer to de resultant substring is: %p", ptr);
	free(ptr);
	return (0);
}*/
