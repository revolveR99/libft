/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:40:40 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:07:35 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strdup function duplicates the string 'str' by dynamically allocating memory for a new string
** containing a copy of the original string. It returns a pointer to the newly allocated memory.
** If memory allocation fails, it returns NULL.
*/

char	*ft_strdup(const char *str)
{
	char	*newstr; // Pointer to the newly allocated memory for the duplicated string
	size_t	i; // Index variable for iterating through the original string

	// Allocate memory for the new string, including space for the null terminator
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (newstr == NULL) // Check if memory allocation fails
		return (NULL);

	i = 0;
	while (str[i] != '\0') // Copy each character from 'str' to 'newstr'
	{
		newstr[i] = str[i];
		i++;
	}

	newstr[i] = '\0'; // Append null terminator to the new string
	return (newstr); // Return a pointer to the duplicated string
}

