/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:10:32 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 16:56:51 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to erase the data in the n bytes of the memory starting at
///the location pointed to by s, by writing zeros (bytes containing '\0')
///to that area.
/// @param s 
/// @param n 
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptrs;

	ptrs = (unsigned char *)s;
	while (n--)
		*ptrs++ = 0;
}

/*int	main(void)
{
	char	str[] = "¡Adoro 42!";
	size_t	n = sizeof(str);
	char	*ptr;

	ptr_ft = str;
	printf("The string to erase is %s.\n", str);
	printf("The number of characters to erase is %zu.\n", n);
	ft_bzero(ptr, n);
	bzero(ptr, n);
	printf("The string erased by ft is %s.\n", ptr);
	printf("The string erased by bzero is %s.\n", ptr);
	return (0);
}*/
