/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:04:59 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:09:24 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strmapi function applies the function 'f' to each character of the string 's',
** passing its index as the first argument to 'f'.
** It allocates memory for a new string containing the modified characters and returns a pointer to it.
** If memory allocation fails or 's' is NULL, it returns NULL.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_one; // Pointer to the newly allocated memory for the modified string
	size_t	i; // Index variable for iterating through the string 's'

	if (s == NULL) // Check if 's' is NULL
		return (NULL);

	// Allocate memory for the new string, including space for the null terminator
	new_one = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_one == NULL) // Check if memory allocation fails
		return (NULL);

	i = 0;
	while (s[i]) // Loop through the characters of 's'
	{
		new_one[i] = f(i, s[i]); // Apply function 'f' to each character and store the result in 'new_one'
		i++; // Move to the next character
	}

	new_one[i] = '\0'; // Append null terminator to the modified string
	return (new_one); // Return a pointer to the modified string
}

