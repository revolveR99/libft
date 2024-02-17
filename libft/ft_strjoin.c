/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 17:28:26 by zabdulza          #+#    #+#             */
/*   Updated: 2023/01/25 17:28:26 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strjoin function concatenates two strings 's1' and 's2' into a new string.
** It allocates memory for the new string and copies the contents of 's1' and 's2' into it.
** It returns a pointer to the newly allocated string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr; // Pointer to the newly allocated memory for the concatenated string
	size_t	length; // Total length of the concatenated string

	if (!s1 || !s2) // Check if any of the strings is NULL
		return (NULL);

	// Calculate the total length of the concatenated string
	length = ft_strlen(s1) + ft_strlen(s2);

	// Allocate memory for the new string, including space for the null terminator
	newstr = (char *)malloc(sizeof(char) * (length + 1));
	if (!newstr) // Check if memory allocation fails
		return (NULL);

	// Copy the contents of 's1' and 's2' into the new string
	ft_strlcpy(newstr, s1, length + 1);
	ft_strlcat(newstr, s2, length + 1);

	return (newstr); // Return a pointer to the concatenated string
}
