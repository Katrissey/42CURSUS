/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:10:32 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 16:19:08 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptrs;

	ptrs = (unsigned char *)s;
	while (n--)
		*ptrs++ = 0;
}

/*int	main(void)
{
	char	str[] = "¡Adoro 42!";
	size_t	n = sizeof(str);
	char	*ptr_ft;

	ptr_ft = str;
	printf("The string to erase is %s.\n", str);
	printf("The number of characters to erase is %zu.\n", n);
	ft_bzero(ptr_ft, n);
	bzero(str, n);
	printf("The string erased by ft is %s.\n", ptr_ft);
	printf("The string erased by bzero is %s.\n", str);
	return (0);
}*/
