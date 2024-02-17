/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:43:33 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:02:03 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memcmp function compares the first 'n' bytes of memory areas 's1' and 's2'.
** It returns an integer less than, equal to, or greater than zero if the first 'n' bytes of 's1'
** are found, respectively, to be less than, to match, or be greater than the first 'n' bytes of 's2'.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1; // Pointer to unsigned char for byte-wise comparison
	unsigned char	*s_2;

	s_1 = (unsigned char *)s1; // Cast 's1' to unsigned char pointer
	s_2 = (unsigned char *)s2; // Cast 's2' to unsigned char pointer
	while (n--)
	{
		if ((*s_1) != ((*s_2))) // Compare bytes
			return ((*s_1) - ((*s_2))); // Return the difference if they are not equal
		s_1++; // Move to the next byte
		s_2++;
	}
	return (0); // Return 0 if the memory areas are identical
}

