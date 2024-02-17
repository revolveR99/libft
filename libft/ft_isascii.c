/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:02:37 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:40:18 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isascii function checks if the character passed as 'zam' is a valid ASCII character.
** It returns 1 if the character is a valid ASCII character (i.e., its ASCII value is between 0 and 127),
** otherwise, it returns 0.
*/

int	ft_isascii(int zam)
{
	if (zam >= 0 && zam <= 127)
		return (1); // Return 1 if ASCII character
	return (0); // Return 0 if not ASCII character
}

