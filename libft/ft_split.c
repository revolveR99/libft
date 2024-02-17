/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:18:23 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:07:04 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_word_searcherer function counts the number of words separated by the character 'c' in the string 's'.
** It returns the count of words found.
*/

static size_t	ft_word_searcherer(char const *s, char c)
{
	size_t	searcher; // Counter for counting words

	searcher = 0;

	while (*s != '\0') // Loop until reaching the end of the string
	{
		while (*s == c) // Skip consecutive occurrences of the delimiter 'c'
			s++;

		if (*s != c && *s != '\0') // If a non-delimiter character is encountered
		{
			searcher++; // Increment the word count
			while (*s && *s != c) // Move to the end of the word
				s++;
		}
	}
	return (searcher); // Return the total count of words
}

/*
** The ft_split function splits the string 's' using the delimiter 'c'.
** It allocates memory for an array of strings, each containing one word, and returns a pointer to it.
** If memory allocation fails, it returns NULL.
*/

char	**ft_split(char const *s, char c)
{
	size_t	lenght; // Length of each word
	char	**result; // Pointer to the array of strings
	size_t	i; // Index variable

	if (s == NULL) // Check if 's' is NULL
		return (NULL);

	i = 0;
	// Allocate memory for the array of strings, with space for the NULL terminator
	result = malloc(sizeof(char *) * (ft_word_searcherer(s, c) + 1));
	if (result == NULL) // Check if memory allocation fails
		return (NULL);

	while (*s)
	{
		if (*s != c) // If a non-delimiter character is encountered
		{
			lenght = 0;
			// Calculate the length of the word
			while (*s && *s != c && ++lenght)
				s++;
			// Allocate memory for the word and copy it into the array
			result[i] = ft_substr(s - lenght, 0, lenght);
			i++;
		}
		else
			s++; // Skip the delimiter
	}
	result[i] = NULL; // Set the last element of the array to NULL to mark the end
	return (result); // Return the array of strings
}

