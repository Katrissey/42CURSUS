/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:26:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 10:46:58 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}

/*int	main(void)
{
	char	*str;
	char	*ptrft;
	char	*ptro;
	int		c;
	size_t	n;

	str = "¡Adoro 42!";
	c = 42;
	n = 10;
	ptrft = ft_memset(str, c, n);
	ptro = memset(str, c, n);
	printf("The string is %s.\n", str);
	printf("The character to set is %c.\n", c);
	printf("The number of characters to set is %zu.\n", n);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with memset is %s.\n", ptro);
	return (0);
}*/
