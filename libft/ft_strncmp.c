/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 01:01:29 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/15 01:32:25 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2 || !*s1 || !*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*int	main(void)
{
	const char	*s1 = "¡Adoro 42!";
	const char	*s2 = "¡Adoro 42!";
	size_t		n = 5;
	int			cmpft;
	int			cmpori;

	cmpft = 0;
	cmpori = 0;
	cmpft = ft_strncmp(s1, s2, n);
	cmpori = strncmp(s1, s2, n);
	printf("The string 1 is %s.\n", s1);
	printf("The string 2 is %s.\n", s2);
	printf("The number of characters to compare is %zu.\n", n);
	printf("The comparison with ft is %d.\n", cmpft);
	printf("The comparison with strncmp is %d.\n", cmpori);
	return (0);
}*/
