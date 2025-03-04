/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:18:06 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/04 13:21:56 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copies "n" bytes from the memory area "src" to memory area "dest".
/// The memory areas may overlap, if that happends, function have to work,
/// copying the "src" bytes into a temporary array that does not overlap "src"
/// or "dest", and the bytes are copied then from the temporary array to "dest"
/// @param dest the empty memory area of destination
/// @param src the memory area you want to copy into "dest"
/// @param n the number of bytes you want to copy into "dest" from "src"
/// @return a pointer to "dest"
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (ptrdest == ptrsrc)
		return (dest);
	if (ptrdest < ptrsrc)
		while (n--)
			*ptrdest++ = *ptrsrc++;
	else
	{
		ptrdest += n;
		ptrsrc += n;
		while (n--)
			*--ptrdest = *--ptrsrc;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "¡Adoro 42!";
	char	dest[15];
	char	*dest_ft = ft_memmove(dest, src, sizeof(src));
	char	*dest_ori = memmove(dest, src, sizeof(src));

	printf("The string to copy from the source is %s.\n", src);
	printf("The number of characters to move is %zu.\n", sizeof(src));
	printf("The string copied with ft is %s.\n", dest_ft);
	printf("The string copied with memmove is %s.\n", dest_ori);
	return (0);
}*/
