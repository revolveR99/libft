/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:30:30 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:08:52 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlcpy function copies the string 'src' to the buffer 'dest' with a maximum
** length of 'size' characters (including the null-terminator).
** It ensures that the destination string is null-terminated even if truncation occurs.
** It returns the total length of the source string.
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t index = 0; // Index variable for iterating through 'src'

	while (index + 1 < size && src[index] != '\0') // Copy characters from 'src' to 'dest' until reaching 'size' or null-terminator
	{
		dest[index] = src[index];
		index++;
	}

	if (size > 0) // Ensure null-termination of 'dest'
		dest[index] = '\0';

	while (src[index] != '\0') // Calculate the length of 'src'
		index++;

	return (index); // Return the total length of 'src'
}

