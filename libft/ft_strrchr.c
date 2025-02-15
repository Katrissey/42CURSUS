/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:48:34 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 00:59:39 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		ptr = (char *)s;
	return (ptr);
}

/*int	main(void)
{
	const char	*str = "¡Adoro 42!";
	char		c = 'r';
	char		*ptrft;
	char		*ptro;

	ptrft = ft_strrchr(str, c);
	ptro = strrchr(str, c);
	printf("The string is %s.\n", str);
	printf("The character is %c.\n", c);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with strrchr is %s.\n", ptro);
	return (0);
}*/
