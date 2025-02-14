/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:49:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 14:07:53 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*int	main(void)
{
	unsigned char	c;
	unsigned char	l;
	unsigned char	s;

	c = '7';
	l = 'F';
	s = ' ';
	if (ft_isdigit(c))
		printf("The character %c is a digit.\n", c);
	else
		printf("The character %c is not a digit.\n", c);
	if (ft_isdigit(l))
		printf("The character %c is a digit.\n", l);
	else
		printf("The character %c is not a digit.\n", l);
	if (ft_isdigit(s))
		printf("The character %c is a digit.\n", s);
	else
		printf("The character %c is not a digit.\n", s);
	if (isdigit(c))
		printf("The character %c is a digit.\n", c);
	else
		printf("The character %c is not a digit.\n", c);
	return (0);
}*/
