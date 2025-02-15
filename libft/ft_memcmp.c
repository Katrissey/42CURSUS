/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 15:34:38 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 19:18:03 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		ret_ft;
	int		ret_ori;

	ret_ft = ft_memcmp(str1, str2, n);
	ret_ori = memcmp(str1, str2, n);
	printf("The first string to compare is %s.\n", str1);
	printf("The second string to compare is %s.\n", str2);
	printf("The number of characters to compare is %zu.\n", n);
	printf("The difference between 1 and 2 string with ft is %d.\n", ret_ft);
	printf("The difference between 1 and 2 string with ori is %d.\n", ret_ori);
	return (0);
}*/
