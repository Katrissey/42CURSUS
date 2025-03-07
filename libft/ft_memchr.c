/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:52:55 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 20:11:47 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief scans the initial "n" bytes of the memory area pointed to by "s",
/// for the first instance of "c". Both, "c" and the bytes of the memory area
/// pointed to by "s", are interpreted as unsigned char.
/// @param s is the memory area in which you want to scan to find
/// the first instance of "c"
/// @param c is the unsigned char you want to find in "s"
/// @param n is the number of bytes from the memory area of "s"
/// in which you are going to find "c"
/// @return a pointer to the matching byte or NULL if the character
/// doesn`t occur in the given memory area.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	unsigned char	chr;

	ptrs = (unsigned char *)s;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*ptrs == chr)
			return ((void *)ptrs);
		ptrs++;
	}
	return (NULL);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <the sring in which you want to find the first instance of the character you send> \
		<the character you want to findd into the string you send> <the number of bytes you want to scan from th string>", argv[0]);
		return (1);
	}
	char	*str = argv[1];
	char	c = argv[2][0];
	size_t	n = strtoul(argv[3], NULL, 10);
	size_t	dest_size = strtoul(argv[3], NULL, 10);

	if (dest_size == 0 && argv[3][0] != '0')
	{
		fprintf(stderr, "%s is not a number or is an invalid one.\n", argv[3]);
		return (1);
	}
	
	char	*ptr_ft = ft_memchr(str, c, n);
	char	*ptr_ori = memchr(str, c , n);

	printf("The source in which to search is: %s.\n", str);
	printf("The character to find is: %c.\n", c);
	printf("The number of bytes to scan is: %zu.\n", n);
	printf("The pointer found with ft is: %s.\n", ptr_ft);
	printf("The pointer found with memchr is: %s.\n", ptr_ori);
	printf("The pointer found with ft is: %p.\n", ptr_ft);
	printf("The pointer found with memchr is: %p.\n", ptr_ori);
	return (0);
}*/
