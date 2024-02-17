/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:32:34 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:41:48 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isdigit function checks if the character passed as 'zam' is a digit (0-9).
** It returns 1 if the character is a digit, otherwise, it returns 0.
*/

int	ft_isdigit(int zam)
{
	if (zam >= '0' && zam <= '9')
		return (1); // Return 1 if digit
	return (0); // Return 0 if not a digit
}
