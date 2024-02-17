/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:39:03 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:42:48 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_sizeofword function calculates the length of the integer 'z' when represented as a string.
** It returns the number of digits in 'z'.
** It adds 1 to the size if 'z' is less than or equal to 0.
*/

static unsigned int	ft_sizeofword(int z)
{
	unsigned int	size;

	size = 0;
	if (z <= 0)
		size++;
	while (z != 0)
	{
		z /= 10;
		size++;
	}
	return (size);
}

/*
** The ft_itoa function converts an integer 'n' to a null-terminated string.
** It allocates memory for the string representation of 'n' and returns a pointer to it.
** If the allocation fails or 'n' is 0, it returns NULL.
*/

char	*ft_itoa(int n)
{
	unsigned int	length; // Length of the string representation of 'n'
	char			*string; // Pointer to the allocated memory for the string
	unsigned int	number; // Absolute value of 'n'

	length = ft_sizeofword(n); // Calculate the length of the string
	string = (char *)malloc(sizeof(char) * (length + 1)); // Allocate memory
	if (!string) // Check if allocation fails
		return (NULL);
	if (n < 0)
	{
		string[0] = '-'; // Set the first character to '-' for negative numbers
		number = -n; // Get the absolute value of 'n'
	}
	else
		number = n;
	if (number == 0)
		string[0] = '0'; // If 'n' is 0, set the first character to '0'
	string[length] = '\0'; // Add null terminator at the end of the string
	while (number > 0)
	{
		string[length - 1] = (number % 10) + '0'; // Extract the digit and convert it to character
		number = number / 10; // Move to the next digit
		length--;
	}
	return (string); // Return pointer to the string representation of 'n'
}

