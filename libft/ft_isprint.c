/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:19:43 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 14:24:20 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(void)
{
	unsigned char	c;
	unsigned char	s;
	unsigned char	na;

	c = '7';
	s = ']';
	na = 128;
	if (ft_isprint(c))
		printf("The character %c is a printable character.\n", c);
	else
		printf("The character %c is not a printable character.\n", c);
	if (ft_isprint(s))
		printf("The character %c is a printable character.\n", s);
	else
		printf("The character %c is not a printable character.\n", s);
	if (ft_isprint(na))
		printf("The character %c is a printable character.\n", na);
	else
		printf("The character %c is not a printable character.\n", na);
	if (isprint(na))
		printf("The character %c is a printable character.\n", na);
	else
		printf("The character %c is not a printable character.\n", na);
	return (0);
}*/
