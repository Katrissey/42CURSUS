/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:39:31 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 20:27:01 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int	main(void)
{
	unsigned char	c;
	unsigned char	l;
	unsigned char	s;

	c = 'a';
	l = 'F';
	s = ']';
	printf("The character %c keeps as %c.\n", c, ft_tolower(c));
	printf("The character %c in lowercase is %c.\n", l, ft_tolower(l));
	printf("The character %c keeps as %c.\n", s, ft_tolower(s));
	printf("The character %c in lowercase is %c.\n", l, tolower(l));
	return (0);
}*/
