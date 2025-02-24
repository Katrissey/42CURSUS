/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 01:35:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/24 18:42:31 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Locates a substring in a string, the first occurrence of the
///null-terminated string little in the string big, where not more tha
///len characters are searched.
/// @param big Is the string in which you are going to search the first
///occurrence of the little string.
/// @param little Is the string you are looking for in the big string.
/// @param len Id the maximun length in which to search, it isn't always
///the size of the big string, it can be shorter.
/// @return If little is an empty string, it returns big. If little occurs
///nowhere in big, it returns NULL. Otherwise, a pointer to the first character
///of the first occurrence of little is returned.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lip;
	size_t	bip;

	lip = 0;
	if (!*little)
		return ((char *)big);
	while (big[lip] && lip < len)
	{
		bip = 0;
		while (big[lip + bip] == little[bip] && little[bip] && lip + bip < len)
			bip++;
		if (!little[bip])
			return ((char *)&big[lip]);
		lip++;
	}
	return (NULL);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <string1> <string2> <number of characters to compare>\n", argv[0]);
		return (1);
	}
	const char	*big = argv[1];
	const char	*little = argv[2];
	size_t		len = strtoul(argv[3], NULL, 10);
	char		*ptrft = ft_strnstr(big, little, len);
	char		*ptro = strnstr(big, little, len);

	printf("The big string is %s.\n", big);
	printf("The little string is %s.\n", little);
	printf("The number of characters to compare is %zu.\n", len);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with strnstr is %s.\n", ptro);
	return (0);
}*/
