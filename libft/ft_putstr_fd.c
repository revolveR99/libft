/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:39:29 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:06:19 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putstr_fd function writes the string 's' to the given file descriptor 'fd'.
*/

void	ft_putstr_fd(char *s, int fd)
{
	while (*s) // Loop through the characters of 's' until reaching the null terminator
	{
		write(fd, s, 1); // Write each character to the file descriptor 'fd'
		s++; // Move to the next character
	}
}

