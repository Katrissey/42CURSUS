/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocgarci <rocgarci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 02:38:15 by rocgarci          #+#    #+#             */
/*   Updated: 2025/03/03 14:31:17 by rocgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief to allocate memory for an array
/// @param nmemb is the number of elements
/// @param size is the size of each element
/// @return a pointer to the allocated memory
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(int argc, char *argv[])
{
	if (argc !=3)
	{
		fprintf(stderr, "Usage: %s <number of elements of the array> \
		<size of each element: 1 if it's a char, 4 if it's an integer, 8 if it's a pointer>", argv[0]);
		return (1);
	}
	void	*ptr = NULL;
	int		num_elements = ft_atoi(argv[1]);
	int		element_size = ft_atoi(argv[2]);
	int		i;

	if (!element_size || (element_size != 1 && element_size != 4 && element_size != 8))
	{
		fprintf(stderr, "Invalid element size. Use 1 for char, 4 for int and 8 for pointer\n");
		return (1);
	}
	if (element_size == 1)
	{
		ptr = ft_calloc(num_elements, sizeof(char));
		i = 0;
		while (i < num_elements)
		{
			printf("La dirección de memoria de cada posición del array de %d elementos de tipo char es: %p\n", num_elements, (void *)&((char*)ptr)[i]);
			i++;
		}
		free(ptr);
	}
	else if (element_size == 4)
	{
		ptr = ft_calloc(num_elements, sizeof(int));
		i = 0;
		while (i < num_elements)
		{
			printf("La dirección de memoria de cada posición del array de %d elementos de tipo int es: %p\n", num_elements, (void *)&((int*)ptr)[i]);
			i++;
		}
		free(ptr);
	}
	else if (element_size == 8)
	{
		ptr = ft_calloc(num_elements, sizeof(char*));
		i = 0;
		while (i < num_elements)
		{
			printf("La dirección de memoria de cada posición del array de %d elementos de tipo string es: %p\n", num_elements, (void *)&((char**)ptr)[i]);
			i++;
		}
		free(ptr);
	}
	return (0);
}*/
