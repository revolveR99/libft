/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:22:59 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:42:13 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isprint function checks if the character passed as 'zam' is a printable character.
** Printable characters are those characters that have a visible representation.
** It returns 1 if the character is a printable character (with ASCII codes from 32 to 126),
** otherwise, it returns 0.
*/

int	ft_isprint(int zam)
{
	if (zam >= 32 && zam <= 126)
		return (1); // Return 1 if printable character
	return (0); // Return 0 if not a printable character
}

