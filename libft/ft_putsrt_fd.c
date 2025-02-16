/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsrt_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:47:36 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/16 19:51:12 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to write a string to a file descriptor
/// @param s is the string to be written
/// @param fd is the file descriptor
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

int	main(void)
{
	ft_putstr_fd("Adoro 42!", 1);
	return (0);
}
