/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:52:55 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 15:32:13 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
