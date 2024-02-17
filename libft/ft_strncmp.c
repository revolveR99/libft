/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:54:03 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 17:09:42 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strncmp function compares the first 'n' characters of two strings 'string1' and 'string2'.
** It returns an integer less than, equal to, or greater than zero if 'string1' is found,
** respectively, to be less than, to match, or be greater than 'string2'.
*/

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	unsigned char	*s_1; // Pointer to the characters of 'string1' cast to unsigned char
	unsigned char	*s_2; // Pointer to the characters of 'string2' cast to unsigned char
	unsigned int	i; // Index variable

	i = 0;
	s_1 = (unsigned char *)string1;
	s_2 = (unsigned char *)string2;

	while (n--) // Loop through the first 'n' characters of both strings
	{
		// If characters at position 'i' are not equal or if one of them is null-terminator, return the difference
		if (string1[i] != string2[i] || !string1[i] || !string2[i])
			return (s_1[i] - s_2[i]);

		i++; // Move to the next character
	}

	return (0); // Return 0 if the first 'n' characters of both strings are equal
}

