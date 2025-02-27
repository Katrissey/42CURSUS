/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:07:42 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/27 17:50:35 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to write a character into a file descriptor
/// @param c is the character to be written
/// @param fd is the file descriptor (1 = terminal))
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <The character to write into a file descriptor>", argv[0]);
		return (1);
	}
	ft_putchar_fd(argv[1][0], 1);
	return (0);
}*/
