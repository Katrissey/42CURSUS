/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:42:26 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:43:36 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to apply a function to each character of a string
/// @param s is the string
/// @param f is the function to apply
/// @return the pointer to the new string
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len--)
		ptr[len] = f(len, s[len]);
	return (ptr);
}

/*int	main(void)
{
	char	*ptr;

	ptr = ft_strmapi("Hello, World!", &ft_toupper);
	printf("%s\n", ptr);
	free(ptr);
	ptr = ft_strmapi("Hello, World!", &ft_tolower);
	printf("%s\n", ptr);
	free(ptr);
	ptr = ft_strmapi("Hello, World!", &ft_isdigit);
	printf("%s\n", ptr);
	free(ptr);
	return (0);
}*/
