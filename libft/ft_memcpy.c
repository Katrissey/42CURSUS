/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:00:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 13:07:09 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrdest;
	unsigned char	*ptrsrc;

	ptrdest = (unsigned char *)dest;
	ptrsrc = (unsigned char *)src;
	while (n--)
		*ptrdest++ = *ptrsrc++;
	return (dest);
}

/*int	main(void)
{
	char	*str;
	char	*ptrft;
	char	*ptro;
	size_t	n;

	str = "¡Adoro 42!";
	n = 10;
	ptrft = ft_memcpy(str, str + 7, n);
	ptro = memcpy(str, str + 7, n);
	printf("The string is %s.\n", str);
	printf("The number of characters to copy is %zu.\n", n);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with memcpy is %s.\n", ptro);
	return (0);
}*/
