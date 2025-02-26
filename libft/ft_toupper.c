/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:29:28 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 18:53:37 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief the ft_toupper function converts a lower-case letter
///to the corresponding upper-case letter.
/// @param c is the character to be converted.
/// @return the converted character. Otherwise, returns c as it was sent.
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to upper>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	if (c >= 97 && c <= 122)
	{
		printf("The character %c in uppercase with ft is: %c.\n", c, ft_toupper(c));
		printf("The character %c in uppercase with touppwer is: %c.\n", c, toupper(c));
	}
	else
		printf("The character %c keeps as %c.\n", c, ft_toupper(c));
	return (0);
}*/
