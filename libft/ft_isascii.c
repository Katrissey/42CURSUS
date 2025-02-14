/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:10:16 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 14:16:51 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	unsigned char	c;
	unsigned char	l;
	unsigned char	na;

	c = '7';
	l = 'F';
	na = 128;
	if (ft_isascii(c))
		printf("The character %c is an ASCII character.\n", c);
	else
		printf("The character %c is not an ASCII character.\n", c);
	if (ft_isascii(l))
		printf("The character %c is an ASCII character.\n", l);
	else
		printf("The character %c is not an ASCII character.\n", l);
	if (ft_isascii(na))
		printf("The character %c is an ASCII character.\n", na);
	else
		printf("The character %c is not an ASCII character.\n", na);
	if (isascii(l))
		printf("The character %c is an ASCII character.\n", l);
	else
		printf("The character %c is not an ASCII character.\n", l);
	return (0);
}*/
