/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:36:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/07 22:17:24 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to convert an integer to a string
/// @param n is the integer
/// @return the pointer to the new string
char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	int		nbr;

	len = 1;
	nbr = n;
	while (nbr /= 10)
		len++;
	if (n < 0)
		len++;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
		ptr[0] = '-';
	else if (n == 0)
		ptr[0] = '0';
	while (n)
	{
		if (n < 0)
			ptr[--len] = '0' - n % 10;
		else
			ptr[--len] = '0' + n % 10;
		n /= 10;
	}
	return (ptr);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <the int you want to become to a string>\n", argv[0]);
		return (1);
	}
	char	*endptr;
	long	n = strtol(argv[1], &endptr, 10);
	if (*endptr != '\0')
	{
		fprintf(stderr, "%s is not a valid number.\n", argv[1]);
		return (1);
	}
	char	*ptr = ft_itoa(n);
	printf("The number you want to become to a string is: %ld.\n", n);
	printf("The new string is: %s\n", ptr);
	free(ptr);
	return (0);
}*/
