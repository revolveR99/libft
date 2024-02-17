/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:36:10 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:07:55 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_striteri function applies the function 'f' to each character of the string 's',
** passing its index as the first argument to 'f'.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	z; // Index variable for iterating through the string 's'

	z = 0;
	if (s != NULL) // Check if 's' is not NULL
	{
		while (z < ft_strlen(s)) // Iterate through the string until reaching the null terminator
		{
			f(z, &s[z]); // Apply function 'f' to the character at index 'z'
			z++; // Move to the next character
		}
	}
}
