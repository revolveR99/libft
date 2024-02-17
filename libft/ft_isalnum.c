/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:50:47 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:39:46 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isalnum function checks if the character passed as 'zam' is alphanumeric.
** It returns 1 if the character is alphanumeric (i.e., a letter or a digit),
** otherwise, it returns 0.
*/

int	ft_isalnum(int zam)
{
	if ((zam >= 'A' && zam <= 'Z') || (zam >= 'a' && zam <= 'z')
		|| (zam >= '0' && zam <= '9'))
		return (1); // Return 1 if alphanumeric
	return (0); // Return 0 if not alphanumeric
}
