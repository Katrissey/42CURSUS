/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:36:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:40:38 by rocgarci         ###   ########.fr       */
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

/*int	main(void)
{
	char	*ptr;

	ptr = ft_itoa(42);
	printf("%s\n", ptr);
	free(ptr);
	ptr = ft_itoa(-42);
	printf("%s\n", ptr);
	free(ptr);
	ptr = ft_itoa(0);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
