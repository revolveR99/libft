/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:52:35 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:09:06 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strlen function calculates the length of the string 'zam'.
** It iterates through the characters of the string until reaching the null-terminator ('\0').
** It returns the length of the string.
*/

size_t	ft_strlen(const char *zam)
{
	size_t index = 0; // Index variable for iterating through the string 'zam'

	while (zam[index]) // Loop until reaching the null-terminator
		index++; // Increment the index to count the characters

	return (index); // Return the length of the string
}

