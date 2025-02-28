/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 19:25:06 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/28 14:15:34 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
/// @brief to verify if the character is a space
/// @param c is the character to be verified
/// @return is the character a space?
static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v' \
		|| c == '\f' || c == '\r');
}

/// @brief To verify if the number is within the limits of an integer
/// @param nb is the number to be verified
/// @param sign is the sign of the number
/// @param next_digit is the next digit to be added to the number
/// @return is the number within the limits of an integer?
static int	ft_maxmin(long nb, int sign, char next_digit)
{
	if (nb > (LONG_MAX - (next_digit - '0')) / 10)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

/// @brief to convert a string to an integer
/// @param str is the string to be converted
/// @return The converted value or 0 if there was an error
int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nb;
	int		overflow_check;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		overflow_check = ft_maxmin(nb, sign, str[i]);
		if (overflow_check != 1)
			return (overflow_check);
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nb);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <The string you want to convert to an integer>", argv[0]);
		return (1);
	}
	char	*str = argv[1];
	int		nb;

	nb = ft_atoi(str);
	if (nb == 0)
		printf("The string %s is not a correct number, please, send a correct one\n", str);
	else
	{
		printf("%s is the string to convert to an integer\n", str);
		printf("%d is the resultant integer\n", nb);
	}
	return (0);
}*/
