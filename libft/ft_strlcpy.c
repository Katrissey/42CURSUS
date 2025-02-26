/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 21:29:43 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 17:34:44 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copy the string src to dst, adding a null-terminator
///at the end of the string, and return the length of the string.
/// @param dst is the destination string.
/// @param src is the source string.
/// @param size is the full size of the destination buffer.
/// @return the length of the copied string.
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

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <source string> <destination total size buffer>", argv[0]);
		return (1);
	}

	size_t n = strtoul(argv[2], NULL, 10);

	if (n == 0 && argv[2][0] != '0')
	{
		fprintf(stderr, "%s, is not a number or is an invalid number.\n", argv[2]);
		return (1);
	}
	
	char		dst[n];
	const char	*src = argv[1];
	size_t		cpyft = ft_strlcpy(dst, src, sizeof(dst));
	size_t		cpyori = strlcpy(dst, src, sizeof(dst));

	printf("The size of de buffer is: %zu.\n", n);
	printf("The string copied in dst with ft is %s.\n", dst);
	printf("The length of the string with ft is %zu.\n", cpyft);
	printf("The length of the string with strlcpy is %zu.\n", cpyori);
	return (0);
}*/
