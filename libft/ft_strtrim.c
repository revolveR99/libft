/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:15:23 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 17:11:09 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_c_inside_set function checks if the character 'c' is present in the set 'set'.
** It returns 1 if 'c' is found in 'set', otherwise, it returns 0.
*/

static int	ft_c_inside_set(char c, char const *set)
{
	size_t	i; // Index variable for iterating through the set 'set'

	i = 0;
	while (set[i] != '\0') // Loop through the characters of 'set'
	{
		if (set[i] == c) // If 'c' is found in 'set', return 1
			return (1);
		i++; // Move to the next character in 'set'
	}
	return (0); // Return 0 if 'c' is not found in 'set'
}

/*
** The ft_strtrim function trims the leading and trailing characters from the string 's1'
** that are present in the set 'set'. It returns a newly allocated string with the trimmed characters removed.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strt; // Index variable for the start of the trimmed string
	size_t	endz; // Index variable for the end of the trimmed string
	char	*s; // Pointer to the newly allocated memory for the trimmed string
	size_t	i; // Index variable for iterating through the trimmed string

	if (s1 == NULL || set == NULL) // Check if either 's1' or 'set' is NULL
		return (NULL);

	strt = 0;
	endz = ft_strlen(s1);

	// Find the start of the trimmed string by skipping leading characters present in 'set'
	while (s1[strt] != '\0' && ft_c_inside_set(s1[strt], set))
		strt++;

	// Find the end of the trimmed string by skipping trailing characters present in 'set'
	while (endz > strt && ft_c_inside_set(s1[endz - 1], set))
		endz--;

	// Allocate memory for the trimmed string, including space for the null terminator
	s = (char *)malloc(sizeof(char) * (endz - strt + 1));
	if (s == NULL) // Check if memory allocation fails
		return (NULL);

	i = 0;
	while (strt < endz) // Copy the trimmed characters to the newly allocated string
	{
		s[i] = s1[strt];
		i++;
		strt++;
	}

	s[i] = '\0'; // Append null terminator to the trimmed string
	return (s); // Return a pointer to the trimmed string
}

