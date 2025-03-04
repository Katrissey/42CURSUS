/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:00:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/04 13:03:57 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copies "n" bytes from memory area "src" to memory area "dest".
/// The memory area must not overlap
/// @param dest the empty memory area in which you want to copy "n" bytes
/// from the memory area "src"
/// @param src The memory area source, from you want to copy "n" bytes
/// into the memory area of destination "dest"
/// @param n the number of bytes from "src" you want to copy in "dest"
/// @return a pointer to "dest"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if ((!dest && !src) || n == 0)
		return (dest);
	if (ptrdest == ptrsrc)
		return (dest);
	while (n--)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}

/*int	main(void)
{
	char	src[] = "¡Adoro 42!";
	char	dest[15];

	char	*dest_ft = ft_memcpy(dest, src, sizeof(src));
	char	*dest_ori = memcpy(dest, src, sizeof(src));
	printf("The string to copy from the source is %s.\n", src);
	printf("The number of characters to move is %zu.\n", sizeof(src));
	printf("The string copied with ft is %s.\n", dest_ft);
	printf("The string copied with memcpy is %s.\n", dest_ori);
	return (0);
}*/
