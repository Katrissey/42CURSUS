/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:40:54 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 15:32:18 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*int	main(void)
{
	const char	*str = "¡Adoro 42!";
	char		c = 'r';
	char		*ptrft;
	char		*ptro;

	ptrft = ft_strchr(str, c);
	ptro = strchr(str, c);
	printf("The string in which to search is %s.\n", str);
	printf("The character is %c.\n", c);
	printf("The pointer with ft is %p.\n", ptrft);
	printf("The pointer with strchr is %p.\n", ptro);
	return (0);
}*/
