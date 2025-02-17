/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:45:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:46:39 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to apply a function to each character of a string
/// @param s is the string
/// @param f is the function to apply
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Hello, World!";

	ft_striteri(str, &ft_toupper);
	printf("%s\n", str);
	ft_striteri(str, &ft_tolower);
	printf("%s\n", str);
	return (0);
}*/
