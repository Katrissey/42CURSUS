/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:39:31 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 18:43:31 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief converts an upper-case letter to the corresponding lower-case letter.
/// @param c is the character to be converted.
/// @return the corresponding lower-case letter if c is an upper-case letter.
///Otherwise, return the character c as it was sent
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to lower>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	if (c >= 65 && c <= 90)
	{
		printf("The character %c in lowercase with ft is: %c.\n", c, ft_tolower(c));
		printf("The character %c in lowercase with tolower is: %c.\n", c, tolower(c));
	}
	else
		printf("The character %c keeps as %c.\n", c, ft_tolower(c));
	return (0);
}*/
