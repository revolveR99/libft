/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:04:01 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:40:03 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isalpha function checks if the character passed as 'zam' is an alphabetic character.
** It returns 1 if the character is an alphabetic character (i.e., a letter),
** otherwise, it returns 0.
*/

int	ft_isalpha(int zam)
{
	if ((zam >= 'A' && zam <= 'Z') || (zam >= 'a' && zam <= 'z'))
		return (1); // Return 1 if alphabetic character
	return (0); // Return 0 if not alphabetic character
}

