/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:38:15 by rocgarci          #+#    #+#             */
/*   Updated: 2025/02/17 02:47:48 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to allocate memory for an array
/// @param nmemb is the number of elements
/// @param size is the size of each element
/// @return 
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	char	*ptr;
	int		i;

	ptr = ft_calloc(10, sizeof(char));
	i = 0;
	while (i < 10)
	{
		printf("%c", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}*/
