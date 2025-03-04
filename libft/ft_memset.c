/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:26:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/04 12:50:05 by rocgarci         ###   ########.fr       */
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

/*int	main(void)
{
	char	str [] = "¡Adoro 42!";
	int		c = 42;
	size_t	n = 10;

	printf("The string is %s.\n", str);

	char	*ptrft = ft_memset(str, c, n);
	char	*ptro = memset(str, c, n);
	
	printf("The character to set is %d.\n", c);
	printf("The number of characters to set is %zu.\n", n);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with memset is %s.\n", ptro);
	return (0);
}*/
