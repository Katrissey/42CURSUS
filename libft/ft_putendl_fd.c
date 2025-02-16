/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 20:09:57 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/16 20:16:51 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to write a string to a file descriptor followed by a newline
/// @param s is the string to be written
/// @param fd is the file descriptor (1 = terminal))
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int	main(void)
{
	ft_putendl_fd("Adoro 42!", 1);
	return (0);
}*/
