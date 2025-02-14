/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:33:28 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 14:37:17 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57));
}

/*int	main(void)
{
	unsigned char	c;
	unsigned char	l;
	unsigned char	s;

	c = '7';
	l = 'F';
	s = ']';
	if (ft_isalnum(c))
		printf("The character %c is an alphanumeric character.\n", c);
	else
		printf("The character %c is not an alphanumeric character.\n", c);
	if (ft_isalnum(l))
		printf("The character %c is an alphanumeric character.\n", l);
	else
		printf("The character %c is not an alphanumeric character.\n", l);
	if (ft_isalnum(s))
		printf("The character %c is an alphanumeric character.\n", s);
	else
		printf("The character %c is not an alphanumeric character.\n", s);
	if (isalnum(c))
		printf("The character %c is an alphanumeric character.\n", c);
	else
		printf("The character %c is not an alphanumeric character.\n", c);
	return (0);
}*/
