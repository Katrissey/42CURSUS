/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:22:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 01:48:52 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to write a number to a file descriptor
/// @details Adding '0' to the number to be written becomes it to its ascii
/// We use recursion to write the number digit by digit
/// @param n is the number to be written
/// @param fd is the file descriptor (1 = terminal))
void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}

/*int	main(void)
{
	ft_putnbr_fd(42, 1);
	printf("\n");
	ft_putnbr_fd(-1234567, 1);
	return (0);
}*/
