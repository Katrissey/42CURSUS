/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 03:12:39 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 03:34:36 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
