/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:29:43 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 23:16:37 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i);
}

/*int	main(void)
{
	char		dst[15];
	const char	*src = "¡Adoro 42!";
	size_t		cpyft;
	size_t		cpyori;

	cpyft = 0;
	cpyori = 0;
	cpyft = ft_strlcpy(dst, src, sizeof(dst));
	cpyori = strlcpy(dst, src, sizeof(dst));
	printf("The length of the string with ft is %zu.\n", cpyft);
	printf("The length of the string with strlcpy is %zu.\n", cpyori);
	return (0);
}*/
