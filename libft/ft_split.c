/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:12:39 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/19 17:21:18 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to verify the data
/// @param s is the string
/// @param c is the character
/// @param ptr is the pointer to the array of strings
/// @return the pointer to the array of strings
char	**ft_verify_data(char const *s, char c, char **ptr)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	return (ptr);
}

/// @brief to cut the string
/// @param s is the string
/// @param c is the character
/// @param ptr is the pointer to the array of strings
/// @param i is the index of the string
/// @param j is the index of the array of strings
/// @return 
char	**ft_cut_string(char const *s, char c, char **ptr, size_t i, size_t j)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**ptr;

	i = 0;
	j = 0;
	if (s[i] != c)
	{
		k = 0;
		while (s[i + k] && s[i + k] != c)
			k++;
		ptr[j] = ft_substr(s, i, k);
		if (!ptr[j])
			return (NULL);
		j++;
		i += k;
	}
	else
		i++;
	return (ptr);
}

/// @brief to split a string into an array of strings	
/// @param s is the string
/// @param c is the character
/// @return the pointer to the array of strings
char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	k;

	ptr = ft_verify_data(s, c, ptr);
	i = 0;
	j = 0;
	while (s[i])
	{
		ft_cut_string(s, c, ptr, i, j);
	}
	ptr[j] = NULL;
	return (ptr);
}

/*int	main(void)
{
	char	**ptr;
	int		i;

	ptr = ft_split("¡Adoro 42!", ' ');
	i = 0;
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/
