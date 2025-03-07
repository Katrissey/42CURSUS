/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:18:06 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 19:41:34 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief copies "n" bytes from the memory area "src" to memory area "dest".
/// The memory areas may overlap, if that happends, function have to work,
/// copying the "src" bytes into a temporary array that does not overlap "src"
/// or "dest", and the bytes are copied then from the temporary array to "dest"
/// @param dest the memory area of destination
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

/// @brief main passing arguments to try my ft_memmove
/// @details I initialize dest to zero using my ft_memset to avoid a bad function
/// (without doing this, my ft_memmove retuned rare characters since the end of the copy)
/// @param argc the number of arguments you pass to the main by terminal
/// @param argv the array of arrays you pass to the main by terminal
/// @return 0 if every works correctly
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

	char	*dest_ft = ft_memmove(dest, src, n);
	char	*dest_ori = memmove(dest, src, n);
	printf("The string to copy from the source is: %s.\n", src);
	printf("The number of characters to copy: is: %zu.\n", n);
	printf("The length of the destination buffer is: %zu.\n", dest_size);
	printf("The string copied with ft is: %s.\n", dest_ft);
	printf("The string copied with memcpy is: %s.\n", dest_ori);
	printf("The pointer to dest to the string copied with ft is: %p.\n", dest_ft);
	printf("The pointer to dest to the string copied with memcpy is: %p.\n", dest_ori);
	return (0);
}*/
