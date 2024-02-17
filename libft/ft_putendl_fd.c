/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:00:36 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:05:14 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h> // Include for the write function

/*
** The ft_putendl_fd function writes the string 's' followed by a newline character ('\n')
** to the given file descriptor 'fd'.
*/

void	ft_putendl_fd(char *s, int fd)
{
	int	i; // Index variable to iterate through the string 's'

	i = 0;

	if (!s) // Check if 's' is NULL
		return;

	while (s[i]) // Loop through the characters of 's' until reaching the null terminator
	{
		write(fd, &s[i], 1); // Write each character to the file descriptor 'fd'
		i++; // Move to the next character
	}

	write(fd, "\n", 1); // Write a newline character to the file descriptor 'fd'
}

