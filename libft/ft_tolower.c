/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:05:47 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:11:59 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_tolower function converts an uppercase letter to lowercase.
** It returns the lowercase equivalent of the input character 'zam'.
*/

int	ft_tolower(int zam)
{
	if (zam >= 'A' && zam <= 'Z') // Check if 'zam' is an uppercase letter
		zam += 32; // Convert to lowercase by adding the ASCII difference between uppercase and lowercase letters
	return (zam); // Return the lowercase equivalent or the input character if it's not an uppercase letter
}
