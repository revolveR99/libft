/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:46:56 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:38:45 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_calloc function allocates memory for an array of 'array' elements,
** each of which has a size of 'size' bytes. The memory is initialized to zero.
** If 'array' or 'size' is zero, it allocates at least enough space for one byte.
** If the allocation fails, it returns NULL.
** It returns a pointer to the allocated memory, or NULL if the allocation fails.
*/

void	*ft_calloc(size_t array, size_t size)
{
	void	*mem; // Pointer to the allocated memory
	size_t	msize; // Total size of the allocated memory block
	char	*p; // Pointer used for initialization

	msize = array * size; // Calculate total size required
	if (array == 0 || size == 0)
	{
		array = 1; // Ensure at least one element
		msize = 1;
	}

	// Check for possible overflow
	if ((msize) < array || (msize) < size)
		return (NULL);

	// Allocate memory
	mem = malloc(msize);
	if (!mem) // Check if allocation fails
		return (NULL);

	// Initialize memory to zero
	p = mem;
	while (msize--)
	{
		*p++ = 0; // Set each byte to zero
	}

	return (mem); // Return pointer to allocated memory
}
