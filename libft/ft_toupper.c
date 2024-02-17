/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:23:28 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:12:15 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_toupper function converts a lowercase letter to uppercase.
** It returns the uppercase equivalent of the input character 'zam'.
*/

int	ft_toupper(int zam)
{
	if (zam >= 'a' && zam <= 'z') // Check if 'zam' is a lowercase letter
		zam -= 32; // Convert to uppercase by subtracting the ASCII difference between lowercase and uppercase letters
	return (zam); // Return the uppercase equivalent or the input character if it's not a lowercase letter
}

