/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 01:35:19 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 02:12:26 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && i + j < len)
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*big = "¡Adoro 42!";
	const char	*little = "42!";
	size_t		len = 10;
	char		*ptrft;
	char		*ptro;

	ptrft = ft_strnstr(big, little, len);
	ptro = strnstr(big, little, len);
	printf("The big string is %s.\n", big);
	printf("The little string is %s.\n", little);
	printf("The number of characters to compare is %zu.\n", len);
	printf("The pointer with ft is %s.\n", ptrft);
	printf("The pointer with strnstr is %s.\n", ptro);
	return (0);
}*/
