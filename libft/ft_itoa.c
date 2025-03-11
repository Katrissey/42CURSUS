/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:36:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/11 17:24:20 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief get the length of the string you need to represent
/// the number sent to the function
/// @param n the number sent to the function
/// @return the length of the number to create the allocation memory
/// needed to represent the number sent to the function
static int	get_length(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/// @brief to convert an integer to a string
/// @param n is the integer
/// @return the pointer to the new string
char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	int		nbr;

	len = get_length(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	nbr = n;
	if (n < 0)
	{
		ptr[0] = '-';
		nbr = -nbr;
	}
	else if (n == 0)
		ptr[0] = '0';
	while (nbr)
	{
		ptr[--len] = '0' + nbr % 10;
		nbr /= 10;
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
