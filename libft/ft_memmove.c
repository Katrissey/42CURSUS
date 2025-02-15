/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:18:06 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 19:17:44 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	char	*dest_ft;
	char	*dest_ori;

	dest_ft = ft_memmove(dest, src, sizeof(src));
	dest_ori = memmove(dest, src, sizeof(src));
	printf("The string to copy from the source is %s.\n", src);
	printf("The number of characters to move is %zu.\n", sizeof(src));
	printf("The string copied with ft is %s.\n", dest_ft);
	printf("The string copied with memmove is %s.\n", dest_ori);
	return (0);
}*/
