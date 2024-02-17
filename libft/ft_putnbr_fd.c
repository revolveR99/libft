/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:53:25 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 17:06:03 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putnbr_fd function writes the integer 'n' to the given file descriptor 'fd'.
*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) // Handle the special case of the most negative integer
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0) // If 'n' is negative, write '-' and recursively call ft_putnbr_fd with its absolute value
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9) // If 'n' is greater than 9, recursively call ft_putnbr_fd with its quotient and remainder
	{
		ft_putnbr_fd(n / 10, fd); // Write the quotient first
		ft_putnbr_fd(n % 10, fd); // Write the remainder after
	}
	else // If 'n' is a single digit, write it as a character
		ft_putchar_fd(n + '0', fd);
}

