/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:30 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 20:59:16 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief tests for any character if it is an alphabetic character
/// @param c is the character to test
/// @return nonzero values if the character is
///an alphabetic character, otherwise it returns 0
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to check if it is an alphabetic one>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	
	if (ft_isalpha(c))
		printf("The character %c, with ft, is an alphabetic one.\n", c);
	else
		printf("The character %c with ft, is NOT an alphabetic one.\n", c);
	if (isalpha(c))
		printf("The character %c, with isalpha, is an alphabetic one.\n", c);
	else
		printf("The character %c with isalpha, is NOT an alphabetic one.\n", c);
	return (0);
}*/
