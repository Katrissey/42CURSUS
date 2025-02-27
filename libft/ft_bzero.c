/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:10:32 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/27 20:11:27 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to erase the data in the n bytes of the memory starting at
///the location pointed to by s, by writing zeros (bytes containing '\0')
///to that area.
/// @param s is the string to erase
/// @param n is the number of characters to erase
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptrs;

	ptrs = (unsigned char *)s;
	while (n--)
		*ptrs++ = 0;
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <The string to erase>", argv[0]);
		return (1);
	}
	char	*str = argv[1];
	size_t	n = ft_strlen(str);
	char	*ptr;

	ptr = str;
	printf("The string to verase is %s.\n", str);
	printf("The number of characters to erase is %zu.\n", n);
	ft_bzero(ptr, n);
	bzero(ptr, n);
	printf("The string erased by ft is %s.\n", ptr);
	printf("The string erased by bzero is %s.\n", ptr);
	return (0);
}*/
