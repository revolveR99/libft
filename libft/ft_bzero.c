/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:32:23 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:38:05 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_bzero function sets the first 'n' bytes of the memory area pointed to by 'pointer'
** to zero.
*/

void	ft_bzero(void *pointer, size_t n)
{
	char	*p; // Pointer to the memory area to be zeroed
	size_t	i; // Index variable for traversing the memory area

	p = (char *)pointer;
	i = 0;
	while (n--)
	{		
		p[i] = 0; // Set each byte to zero
		i++;
	}
}
