/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:34:32 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:04:31 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memmove function copies 'len' bytes from memory area 'src' to memory area 'dest'.
** It handles overlapping memory areas correctly, ensuring that the original data in 'src' is
** preserved before copying.
** It returns a pointer to 'dest'.
*/

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*s; // Pointer to unsigned char for byte-wise copy
	unsigned char	*d;

	d = (unsigned char *)dest; // Cast 'dest' to unsigned char pointer
	s = (unsigned char *)src; // Cast 'src' to unsigned char pointer

	if (!dest && !src) // Check if both 'dest' and 'src' are NULL
		return (NULL);

	if (s < d) // If source overlaps with destination, copy from end to start
		while (len--)
			d[len] = s[len];
	else // Otherwise, copy from start to end
		while (len--)
		{	
			*d = *s;
			d++;
			s++;
		}

	return (dest); // Return a pointer to 'dest'
}

