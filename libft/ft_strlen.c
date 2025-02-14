/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 20:34:52 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/14 21:13:34 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	char	*copia;

	copia = (char *) s;
	while (*copia != '\0')
		copia++;
	return (copia - s);
	return (0);
}

/*int	main(void)
{
	size_t	lenft;
	size_t	lenori;

	lenft = ft_strlen("¡Adoro 42!");
	lenori = strlen("¡Adoro 42!");
	printf("The length of the string with ft is %zu.\n", lenft);
	printf("The length of the string with strlen is %zu.\n", lenori);
	return (0);
}*/
