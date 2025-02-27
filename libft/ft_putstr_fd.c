/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:47:36 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/27 18:01:34 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to write a string into a file descriptor
/// @param s is the string to be written
/// @param fd is the file descriptor (1 = terminal))
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <The string to write into a file descriptor>", argv[0]);
		return (1);
	}
	ft_putstr_fd(argv[1], 1);
	return (0);
}*/
