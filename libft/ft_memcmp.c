/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:34:38 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/04 18:35:42 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int	main(void)
{
	char	str1[] = "¡Adoro 42!";
	char	str2[] = "¡Adoro por siempre 42!";
	size_t	n = 10;
	int		ret_ft = ft_memcmp(str1, str2, n);
	int		ret_ori = memcmp(str1, str2, n);

	printf("The first string to compare is %s.\n", str1);
	printf("The second string to compare is %s.\n", str2);
	printf("The number of characters to compare is %zu.\n", n);
	printf("The difference between 1 and 2 string with ft is %d.\n", ret_ft);
	printf("The difference between 1 and 2 string with ori is %d.\n", ret_ori);
	return (0);
}*/
