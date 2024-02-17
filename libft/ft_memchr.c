/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:42:39 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:50:20 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memchr function searches for the first occurrence of the character 'c' (interpreted as
** an unsigned char) in the first 'n' bytes of the memory area pointed to by 'str'.
** It returns a pointer to the first occurrence of 'c' if found, otherwise, it returns NULL.
*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s; // Pointer to unsigned char for byte-wise comparison
	unsigned char	ch2; // Unsigned char representation of 'c'

	s = (unsigned char *)str; // Cast 'str' to unsigned char pointer
	ch2 = (unsigned char)c; // Cast 'c' to unsigned char
	while (n--)
	{
		if (*s == ch2) // Check if the current byte matches 'c'
			return ((void *)s); // Return pointer to the matching byte
		s++; // Move to the next byte
	}
	return (NULL); // Return NULL if 'c' is not found in the memory area
}

