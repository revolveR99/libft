/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:18:31 by marvin            #+#    #+#             */
/*   Updated: 2023/01/18 15:18:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_substr function creates a new substring from the string 's',
** starting at index 'start' and having a maximum length of 'len' characters.
** It returns a pointer to the newly allocated substring.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1; // Pointer to the newly allocated substring

	if (s == NULL) // Check if 's' is NULL
		return (NULL);

	if (start >= ft_strlen(s)) // If 'start' is beyond the length of 's', return an empty string
		return (ft_strdup(""));

	if (len > ft_strlen(s + start)) // Limit 'len' to the remaining characters of 's' starting from 'start'
		len = ft_strlen(s + start);

	// Allocate memory for the substring, including space for the null terminator
	s1 = malloc(sizeof(char) * (len + 1));
	if (s1 == NULL) // Check if memory allocation fails
		return (NULL);

	// Copy the substring from 's' starting at index 'start' to 's1'
	ft_strlcpy(s1, s + start, len + 1);

	return (s1); // Return a pointer to the substring
}

