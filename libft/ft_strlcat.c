/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 00:28:36 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 14:28:46 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief concatenate strings with size control and adding null-termination
/// @param dst is the destination string
/// @param src is the source string
/// @param size is the total size of the destination buffer
/// @return the total length of the string it tried to create
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

/*int	main(int argc, char *argv[])
{
	if (argc !=4)
	{
		fprintf(stderr, "Usage: <destination string> <source string> <destination total buffer size (NUMBER)>");
		return (1);
	}
	size_t	n = strtoul(argv[3], NULL, 10);
	int	len_n = ft_strlen(argv[3]);
	while (len_n >=0)
	{
		if ((!argv[3][len_n] >= '0') && (!argv[3][len_n] <= '9'))
		{
			fprintf(stderr, "%s, is not a number or is an invalid number.\n", argv[3]);
			return (1);
		}
		len_n--;
	}
	if (n == 0 && argv[3][0] != '0')
	{
		fprintf(stderr, "%s, is not a number or is an invalid number.\n", argv[3]);
		return (1);
	}
	char		dst[n];
	ft_strlcpy(dst, argv[1], sizeof(dst));
	const char	*src = argv[2];
	size_t		catft = ft_strlcat(dst, src, sizeof(dst));
	size_t		catori = strlcat(dst, src, sizeof(dst));

	printf("The string initially inside dst is: %s.\n", argv[1]);
	printf("The string source, which is going to be concatenated in dst is: %s.\n", src);
	printf("The size of de buffer is: %zu.\n", n);
	printf("The string concatenated with ft is: %s.\n", dst);
	printf("The total length of the final string it tried to created with ft is: %zu.\n", catft);
	printf("The length of the string with strlcat is: %zu.\n", catori);
	return (0);
}*/
