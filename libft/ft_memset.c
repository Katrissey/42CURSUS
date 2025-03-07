/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:26:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 16:41:09 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief fills the first "n" bytes of the memory area pointed by "s",
/// with the constant byte c
/// @param s is the memory area you want to fill
/// @param c is the constant byte you want to overwrite with in the memory
/// area "s", n times
/// @param n number of the first bytes you want to use the constant byte "c"
/// into "s" to overwrite that memory space
/// @return a pointer to the memory area "s"
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <the string you want to overwrite> <the character to overwrite the string> \
		<the number of bytes you want to overwrite from the string with the character you use>", argv[0]);
		return (1);
	}
	char	*str = argv[1];
	int		c = strtoul(argv[2], NULL, 10);
	size_t	n = strtoul(argv[3], NULL, 10);

	printf("The string you want to overwrite is: %s.\n", str);

	char	*ptrft = ft_memset(str, c, n);
	char	*ptro = memset(str, c, n);
	
	printf("The overwrite string is: %s.\n", str);
	printf("The character to set is: %d.\n", c);
	printf("The number of characters to set is: %zu.\n", n);
	printf("The pointer with ft is: %s.\n", ptrft);
	printf("The pointer with memset is: %s.\n", ptro);
	printf("The pointer address with ft is: %p.\n", ptrft);
	printf("The pointer address with memset is: %p.\n", ptro);
	return (0);
}*/
