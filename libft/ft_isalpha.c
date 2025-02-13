/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:13:30 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/13 19:03:38 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*int	main(void)
{
	unsigned char	c;
	unsigned char	l;
	unsigned char	s;

	c = '7';
	l = 'F';
	s = ' ';
	if (ft_isalpha(c))
		printf("The character %c is an alphabetic character.\n", c);
	else
		printf("The character %c is not an alphabetic character.\n", c);
	if (ft_isalpha(l))
		printf("The character %c is an alphabetic character.\n", l);
	else
		printf("The character %c is not an alphabetic character.\n", l);
	if (ft_isalpha(s))
		printf("The character %c is an alphabetic character.\n", s);
	else
		printf("The character %c is not an alphabetic character.\n", s);
	if (isalpha(l))
		printf("The character %c is an alphabetic character.\n", l);
	else
		printf("The character %c is not an alphabetic character.\n", l);
	if (isalpha(s))
		printf("The character %c is an alphabetic character.\n", s);
}*/
