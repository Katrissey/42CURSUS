/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:49:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 20:48:05 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief tests if a character is a digit
/// @param c is the character to test
/// @return nonzero values if the character is a digit,
/// 0 otherwise.
int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to check if it is a digit>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	
	if (ft_isdigit(c))
		printf("The character %c, with ft, is a digit.\n", c);
	else
		printf("The character %c with ft, is NOT a digit.\n", c);
	if (isdigit(c))
		printf("The character %c, with isdigit, is a digit.\n", c);
	else
		printf("The character %c with isdigit, is NOT a digit.\n", c);
	return (0);
}*/
