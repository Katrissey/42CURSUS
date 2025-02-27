/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:22:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/27 19:06:11 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to write a number to a file descriptor
/// @details Adding '0' to the number to be written becomes it to its ascii.
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

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <The number to write into a file descriptor> \
		<The number that represents the fd you want to write in>", argv[0]);
		return (1);
	}
	size_t n = strtoul(argv[1], NULL, 10);
	size_t fd = strtoul(argv[2], NULL, 10);

	ft_putnbr_fd(n, fd);
	return (0);
}*/
