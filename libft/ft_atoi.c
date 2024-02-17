/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:35:46 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:35:48 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_atoi function converts the initial portion of the string pointed to by
** 's' to integer representation.
** It skips whitespace characters (as specified in the C standard).
** It handles an optional initial plus or minus sign, followed by a sequence of
** digits (0-9), and stops when an invalid character is encountered.
** It returns the converted integer.
*/

int	ft_atoi(const char *s)
{
	int	outcome; // Stores the converted integer value
	int	i; // Index variable for traversing the string
	int	signchange; // Stores the sign of the number (1 for positive, -1 for negative)

	signchange = 1;
	i = 0;
	outcome = 0;
	
	// Skip leading whitespace characters
	while (s[i] == '\t' || s[i] == '\v' || s[i] == '\f'
		|| s[i] == '\n' || s[i] == ' ' || s[i] == '\r')
	{
		i++;
	}

	// Handle optional sign
	if (s[i] == '-')
	{	
		signchange = signchange * -1; // Update sign to negative
		i++;
	}
	else if (s[i] == '+')
		i++; // Skip if the sign is positive

	// Convert string to integer
	while (s[i] >= '0' && s[i] <= '9')
	{
		outcome = ((s[i] - '0') + (outcome * 10)); // Update outcome by adding the digit
		i++;
	}

	// Multiply the result by the sign
	return (outcome * signchange);
}
