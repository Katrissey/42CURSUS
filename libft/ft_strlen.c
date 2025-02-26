/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:34:52 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 17:49:43 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief the ft_strlen() function computes the length of the string s.
/// @param s is the string whose length is to be found.
/// @return the number of characters that precede the terminating NUL character.
size_t	ft_strlen(const char *s)
{
	char	*copia;

	copia = (char *) s;
	while (*copia != '\0')
		copia++;
	return (copia - s);
	return (0);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <string to mesure>", argv[0]);
		return (1);
	}
	size_t	lenft = ft_strlen(argv[1]);
	size_t	lenori = strlen(argv[1]);

	printf("The length of the string with ft is %zu.\n", lenft);
	printf("The length of the string with strlen is %zu.\n", lenori);
	return (0);
}*/
