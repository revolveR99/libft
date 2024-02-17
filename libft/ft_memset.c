/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:37:51 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:04:49 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memset function fills the first 'n_bytesof_memory' bytes of the memory area pointed
** to by 'pointer' with the constant byte 'cons_byte'.
** It returns a pointer to the memory area 'pointer'.
*/

void	*ft_memset(void *pointer, int cons_byte, size_t n_bytesof_memory)
{
	char	*string; // Pointer to char for byte-wise setting
	size_t	index; // Index variable for iterating through the memory area

	index = 0;
	string = (char *)pointer; // Cast 'pointer' to char pointer
	while (index < n_bytesof_memory)
	{
		string[index] = cons_byte; // Set each byte to 'cons_byte'
		index++; // Move to the next byte
	}
	return (pointer); // Return a pointer to the memory area 'pointer'
}

