/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:06:11 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:08:35 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlcat function appends the string 'src' to the end of the string 'dest'.
** It ensures that the total length of the concatenated string is at most 'size' characters,
** including the null-terminator.
** It returns the total length of the concatenated string.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	di; // Index variable for 'dest'
	size_t	si; // Index variable for 'src'
	size_t	dlen; // Length of 'dest'
	size_t	slen; // Length of 'src'

	if (dest == NULL && size == 0) // Check if 'dest' is NULL and 'size' is 0
		return (0);

	dlen = ft_strlen(dest); // Calculate the length of 'dest'
	slen = ft_strlen(src); // Calculate the length of 'src'
	di = dlen;
	si = 0;

	if (size <= dlen) // If 'size' is less than or equal to the length of 'dest'
		return (slen + size); // Return the total length of 'src' plus 'size'

	while (di + 1 < size && src[si] != '\0') // Copy 'src' to 'dest' until reaching 'size' or end of 'src'
	{
		dest[di] = src[si];
		di++;
		si++;
	}
	dest[di] = '\0'; // Append null terminator to the concatenated string

	return (slen + dlen); // Return the total length of the concatenated string
}

