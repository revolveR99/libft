/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:31 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:09:58 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strnstr function finds the first occurrence of the substring 'little' in the string 'big'
** where the search is limited to the first 'len' characters of 'big'.
** It returns a pointer to the beginning of the substring if found, otherwise, it returns NULL.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h; // Index variable for iterating through 'big'
	size_t	n; // Index variable for iterating through 'little'

	if (*little == '\0') // If 'little' is an empty string, return 'big'
		return ((char *)big);

	if (len == 0) // If 'len' is 0, return NULL
		return (NULL);

	h = 0;
	while (big[h]) // Loop through the characters of 'big' until reaching the null terminator
	{
		n = 0;
		while (little[n] && big[h + n] == little[n] && h + n < len) // Check for substring match
			n++;

		if (little[n] == '\0') // If the end of 'little' is reached, return the pointer to the beginning of the substring in 'big'
			return ((char *)&big[h]);

		h++; // Move to the next character in 'big'
	}

	return (NULL); // Return NULL if 'little' is not found in the first 'len' characters of 'big'
}

