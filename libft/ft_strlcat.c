/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:28:36 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 00:35:30 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (dstlen + i < size - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*int	main(void)
{
	char		dst[15];
	const char	*src = "¡Adoro 42!";
	size_t		catft;
	size_t		catori;

	catft = 0;
	catori = 0;
	catft = ft_strlcat(dst, src, sizeof(dst));
	catori = strlcat(dst, src, sizeof(dst));
	printf("The string concatenated with ft is %s.\n", dst);
	printf("The length of the string with ft is %zu.\n", catft);
	printf("The length of the string with strlcat is %zu.\n", catori);
	return (0);
}*/
