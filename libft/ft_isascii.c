/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:10:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 20:12:58 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Checks if the character c is a 7-bit unsigned char value
///tat fits into the ASCII character set.
/// @param c Is the character to check.
/// @return Nonzero values if c is an ASCII character, 0 otherwise.
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to check if it is ASCII>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	
	if (ft_isascii(c))
		printf("The character %c, with ft, is ASCII.\n", c);
	else
		printf("The character %c with ft, is NOT ASCII.\n", c);
	if (isascii(c))
		printf("The character %c, with isprint, is ASCII.\n", c);
	else
		printf("The character %c with isprint, is NOT ASCII.\n", c);
	return (0);
}*/
