/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:45:40 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/11 15:43:44 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to apply a function to each character of a string,
/// sending an index as its first parameter of that function
/// and A POINTER TO each character as its second parameter,
/// TO CHANGE THE ORIGINAL STRING after apply the sent function
/// @param s is the string to iterate
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

/*/// @brief Change my ft_toupper to be call by other function, apply my real ft_toupper
/// but changing the original characters on the string sent to the calling function.
/// Cast the pointer "*c" from "char" to "int" to well application of ft_toupper,
/// remember the prototipe of ft_toupper
/// @details use (void)i to not use index avoiding errors of not using variables
/// @param i index
/// @param c each character of the string sent to the calling function
void	ft_my_toupper(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper((int)*c);
}
/// @brief Change my ft_tolower to be call by other function, apply my real ft_tolower
/// but changing the original characters on the string sent to the calling function.
/// Cast the pointer "*c" from "char" to "int" to well application of ft_tolower,
/// remember the prototipe of ft_tolower
/// @details use (void)i to not use index avoiding errors of not using variables
/// @param i index
/// @param c each character of the string sent to the calling function
void	ft_my_tolower(unsigned int i, char *c)
{
	(void)i;
	*c = ft_tolower((int)*c);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <The string you want to use a function on each of its characters>\n", argv[0]);
		return (1);
	}

	char	*str = argv[1];

	printf("The original string is: %s\n", str);
	ft_striteri(str, ft_my_toupper);
	printf("The resultant string after apply ft_striteri with ft_my_toupper is: %s\n", str);
	ft_striteri(str, ft_my_tolower);
	printf("The resultant string after apply ft_striteri with ft_my_tolower is: %s\n", str);
	return (0);
}*/
