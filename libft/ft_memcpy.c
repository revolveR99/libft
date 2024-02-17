/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:26:51 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:03:07 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memcpy function copies 'n' bytes from memory area 'src' to memory area 'dest'.
** It returns a pointer to 'dest'.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d; // Pointer to unsigned char for byte-wise copy
	unsigned char	*s;
	size_t index = 0; // Index variable for iterating through the memory areas

	if (!dest && !src) // Check if both 'dest' and 'src' are NULL
		return (NULL);

	d = (unsigned char *)dest; // Cast 'dest' to unsigned char pointer
	s = (unsigned char *)src; // Cast 'src' to unsigned char pointer

	while (n--)
	{
		d[index] = s[index]; // Copy each byte from 'src' to 'dest'
		index++; // Move to the next byte
	}

	return (dest); // Return a pointer to 'dest'
}

