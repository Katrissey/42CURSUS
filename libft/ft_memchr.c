/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:52:55 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/04 13:41:06 by rocgarci         ###   ########.fr       */
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

/*int	main(void)
{
	char	str[] = "¡Adoro 42!";
	char	c = '4';
	char	*ptr_ft;
	char	*ptr_ori;

	ptr_ft = ft_memchr(str, c, sizeof(str));
	ptr_ori = memchr(str, c , sizeof(str));
	printf("The source in which to search is %s.\n", str);
	printf("The character to find is %c.\n", c);
	printf("The pointer found with ft is %s.\n", ptr_ft);
	printf("The pointer found with memchr is %s.\n", ptr_ori);
	return (0);
}*/
