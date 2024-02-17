/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:06:56 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:07:20 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strchr function searches for the first occurrence of the character 'c' (converted to a char)
** in the string 's'. It returns a pointer to the first occurrence of 'c' if found, otherwise, it returns NULL.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c) // Loop until reaching the end of string or finding 'c'
	{
		if (!*s) // If the end of string is reached without finding 'c', return NULL
			return (NULL);
		else
			s++; // Move to the next character in 's'
	}
	return ((char *)s); // Return a pointer to the first occurrence of 'c'
}

