/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 01:01:29 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/24 18:40:39 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief the strncmp() function compares not more than n characters
///of two strings and returns an integer representing the difference
///between the first non-matching characters.
/// @param s1 is the first string to compare
/// @param s2 is the second string to compare
/// @param n is the number of characters to compare
/// @return the difference between the first non-matching characters. Is an int.
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

/*int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <string1> <string2> <number of characters to compare>\n", argv[0]);
		return (1);
	}
	const char	*s1 = argv[1];
	const char	*s2 = argv[2];
	size_t		n = strtoul(argv[3], NULL, 10);

	int			cmpft = ft_strncmp(s1, s2, n);
	int			cmpori =strncmp(s1, s2, n);

	printf("The string 1 is %s.\n", s1);
	printf("The string 2 is %s.\n", s2);
	printf("The number of characters to compare is %zu.\n", n);
	printf("The comparison with ft is %d.\n", cmpft);
	printf("The comparison with strncmp is %d.\n", cmpori);
	return (0);
}*/
