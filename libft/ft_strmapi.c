/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:42:26 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/11 14:49:08 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to apply a function to each character of a string,
/// sending an index as its first parameter of that function
/// and each character as its second parameter
/// @param s is the string to iterate
/// @param f is the function to apply to the sending string 
/// @return the pointer to the new string created after the correct
/// use of the function over each character, or NULL if it fails
/// the memory allocation.
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

/*char	ft_my_toupper(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

char	ft_my_tolower(unsigned int i, char c)
{
	(void)i;
	return (ft_tolower(c));
}

/// @brief call to my ft_isdigit to scan on a string if every, some or none of its "c" chars are a digit
/// @param i index
/// @param c tha character you iterate on the string
/// @return "c" if the char isn't a digit and 'D' if it is a digit
char	ft_my_isdigit(unsigned int i, char c)
{
	(void)i;
	if (ft_isdigit(c))
		return ('D');
	return (c);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <The string you want to use a function on each of its characters>\n", argv[0]);
		return (1);
	}
	char	*ptr;

	char	*str = argv[1];

	ptr = ft_strmapi(str, ft_my_toupper);
	printf("The result after apply ft_strmapi with ft_my_toupper is: %s\n", ptr);
	free(ptr);
	ptr = ft_strmapi(str, ft_my_tolower);
	printf("The result after apply ft_strmapi with ft_my_tolower is: %s\n", ptr);
	free(ptr);
	ptr = ft_strmapi(str, ft_my_isdigit);
	printf("The result after apply ft_my_isdigit is: %s\n", ptr);
	free(ptr);
	return (0);
}*/
