/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:34:38 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 20:49:33 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief compares the first "n" bytes of the memory areas "s1" and "s2",
/// each of them, interpreted as unsigned char
/// @details if some bytes from s1 and s2 match in the "n" bytes scanned,
/// but not the all "n" bytes, the function compares de value of the first
/// single different byte in each memory area, and substracts the ASCII value
/// of the first, from the ASCII value of the second.
/// @param s1 the memory area to compare its first "n" bytes to the first
/// "n" bytes from "s2"
/// @param s2 the other memory area to compare its first "n" bytes to the first
/// "n" bytes from "s1"
/// @param n number of bytes you want to compare between "s1" and "s2"
/// @return an integer less than, equal to, or bigger than zero if the first "n"
/// bytes of "s1" are found, respectively, to be less than, to match,
/// or be greater than the first "n" bytes of "s2".
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptrs1 != *ptrs2)
			return (*ptrs1 - *ptrs2);
		ptrs1++;
		ptrs2++;
	}
	return (0);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <the first string to compare with the second> <the second string to compare with the first> \
		<the number of bytes you want to compare between both strings>", argv[0]);
		return (1);
	}
	char	*str1 = argv[1];
	char	*str2 = argv[2];
	size_t	n = strtoul(argv[3], NULL, 10);
	if (n == 0 && argv[3][0] != 0)
	{
		fprintf(stderr, "%s is not a number or is an invalid number.\n", argv[3]);
		return (1);
	}
	int		ret_ft = ft_memcmp(str1, str2, n);
	int		ret_ori = memcmp(str1, str2, n);

	printf("The first string to compare is %s.\n", str1);
	printf("The second string to compare is %s.\n", str2);
	printf("The number of characters to compare is %zu.\n", n);
	printf("The difference between 1 and 2 string with ft is %d.\n", ret_ft);
	printf("The difference between 1 and 2 string with ori is %d.\n", ret_ori);
	return (0);
}*/
