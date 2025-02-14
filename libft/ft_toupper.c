/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:29:28 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 20:32:22 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(void)
{
	unsigned char	c;
	unsigned char	l;
	unsigned char	s;

	c = 'a';
	l = 'F';
	s = ']';
	printf("The character %c in uppercase is %c.\n", c, ft_toupper(c));
	printf("The character %c keeps as %c.\n", l, ft_toupper(l));
	printf("The character %c keeps as %c.\n", s, ft_toupper(s));
	printf("The character %c in uppercase is %c.\n", c, toupper(c));
	return (0);
}
