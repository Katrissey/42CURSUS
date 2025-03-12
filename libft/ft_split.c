/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:12:39 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/12 23:06:31 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to count the number of words, therefore, the substrings
/// you want to get dividing the originla string it will be sent to ft_split
/// @param s is the original string
/// @param c is the character you use to recognize and separate the words
/// into the original string.
/// @return the number of words there are into the original string
static int	ft_count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

/// @brief to copy a substring using my ft_strlcpy
/// @param start is the pointer to the string you want to copy
/// @param len is the length of the string you want to copy
/// @return the new word get from the original string,
/// in a new memory allocation, to be part of the new array
/// that will be created later.
static char	*ft_copy_word(char const *start, size_t len)
{
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	if (word)
	{
		ft_strlcpy(word, start, len + 1);
	}
	return (word);
}

/// @brief to fill the array of arrays with the new words
/// copied into new memory allocations get from the original string.
/// @details when you just created and fill the array os arrays
/// with the words you get from the original string, you must add
/// a NULL position at the end of the array of arrays,
/// as you do in a string, adding the terminated null character,
/// in order to determinate the end of the array of arrays.
/// @param result_array the array of arrays with the words
/// from the original string.
/// @param s the original string
/// @param c the character you use to recognize and separate the words
/// from the original string.
static void	ft_fill_result_array(char **result_array, char const *s, char c)
{
	int			i;
	char const	*start;
	size_t		len;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (len > 0)
			result_array[i++] = ft_copy_word(start, len);
	}
	result_array[i] = NULL;
}

/// @brief to split a string into an array of strings	
/// @param s is the string you want to separate in its words
/// @param c is the character you use to recognize and separate the words
/// @return the pointer to the array of strings
char	**ft_split(char const *s, char c)
{
	char	**result_array;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result_array = (char **)malloc((words +1) * sizeof(char *));
	if (!result_array)
		return (NULL);
	ft_fill_result_array(result_array, s, c);
	return (result_array);
}

/*int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <the string you want to split> <the character to separate>\n", argv[0]);
		return (1);
	}
	char	*str = argv[1];
	char	c = argv[2][0];
	char	**ptr = ft_split(str, c);
	int		i;

	i = 0;
	while (ptr[i])
	{
		printf("The string %d is: %s\n", i, ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/
