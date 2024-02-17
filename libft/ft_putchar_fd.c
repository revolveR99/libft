/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:31:28 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:05:01 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h> // Include for the write function

/*
** The ft_putchar_fd function writes the character 'c' to the given file descriptor 'fd'.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1); // Write the character 'c' to the file descriptor 'fd'
}

