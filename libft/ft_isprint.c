/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:43 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/26 19:32:11 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Function that checks if the character is printable.
/// @param c is the character to check.
/// @return the function returns nonzero value if the character
///is printable, 0 otherwise.
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the character to check if it is printable>", argv[0]);
		return (1);
	}
	unsigned char	c = argv[1][0];
	if (argv[1][1] != '\0')
	{
		fprintf(stderr, "Mistaken character. You must send an individual one.\n");
		return (1);
	}
	if (ft_isprint(c))
		printf("The character %c, with ft, is printable\n", c);
	else
		printf("The character %c with ft, is NOT printable.\n", c);
	if (isprint(c))
		printf("The character %c, with isprint, is printable\n", c);
	else
		printf("The character %c with isprint, is NOT printable.\n", c);
	return (0);
}*/
