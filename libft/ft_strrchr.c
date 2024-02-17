/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:35:24 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:10:35 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strrchr function searches for the last occurrence of the character 'c' (converted to a char)
** in the string 's'. It returns a pointer to the last occurrence of 'c' if found, otherwise, it returns NULL.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	z; // Index variable for iterating through 's' in reverse order

	z = ft_strlen(s); // Get the length of the string 's'
	while (z >= 0) // Loop from the end of 's' to the beginning
	{
		if (s[z] == (char)c) // If 'c' is found at position 'z', return the pointer to that position
			return ((char *)s + z);
		z--; // Move to the previous character in 's'
	}
	return (NULL); // Return NULL if 'c' is not found in 's'
}
