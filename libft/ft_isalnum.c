/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:33:28 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 20:39:38 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief tests for any character if it is an alphanumeric one
///equivalent to if it is an alphabetic character or a digit.
/// @param c int value of the character to be tested
/// @return nonzero values if the character is alphanumeric, 0 otherwise
int	ft_isalnum(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57));
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to check if it is an alfanumeric one>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	
	if (ft_isalnum(c))
		printf("The character %c, with ft, is alphanumeric.\n", c);
	else
		printf("The character %c with ft, is NOT alphanumeric.\n", c);
	if (isalnum(c))
		printf("The character %c, with isalnum, is alphanumeric.\n", c);
	else
		printf("The character %c with isalnum, is NOT alphanumeric.\n", c);
	return (0);
}*/
