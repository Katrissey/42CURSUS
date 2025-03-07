/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:00:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 19:20:34 by rocgarci         ###   ########.fr       */
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

/*int	main(int argc, char *argv[])
{
	if(argc != 4)
	{
		fprintf(stderr, "Usage: %s <the string you want to copy into destination memory area> \
		<the number of bytes you want to copy from the source to destination> \
		<the size of the buffer of destination>", argv[0]);
		return (1);
	}
	char	*src = argv[1];

	size_t	n = strtoul(argv[2], NULL, 10);

	if (n == 0 && argv[2][0] != '0')
	{
		fprintf(stderr, "%s is not a number or is an invalid one.\n", argv[2]);
		return (1);
	}

	size_t	dest_size = strtoul(argv[3], NULL, 10);

	if (dest_size == 0 && argv[3][0] != '0')
	{
		fprintf(stderr, "%s is not a number or is an invalid one.\n", argv[3]);
		return (1);
	}

	if (argv[3][0] == '0' && argv[3][1] == '\0')
	{
		fprintf(stderr, "Buffer size cannot be 0.\n");
		return (1);
	}

	char	dest[dest_size];
	ft_memset(dest, '\0', dest_size);

	char	*dest_ft = ft_memcpy(dest, src, n);
	char	*dest_ori = memcpy(dest, src, n);
	printf("The string to copy from the source is: %s.\n", src);
	printf("The number of characters to copy: is: %zu.\n", n);
	printf("The length of the destination buffer is: %zu.\n", dest_size);
	printf("The string copied with ft is: %s.\n", dest_ft);
	printf("The string copied with memcpy is: %s.\n", dest_ori);
	printf("The pointer to dest to the string copied with ft is: %p.\n", dest_ft);
	printf("The pointer to dest to the string copied with memcpy is: %p.\n", dest_ori);
	return (0);
}*/
