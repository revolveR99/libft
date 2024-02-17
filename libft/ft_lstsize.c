/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:25:54 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:49:46 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstsize function calculates the number of elements in the linked list 'lst'.
** It traverses the list and increments a counter for each element encountered.
** It returns the total count of elements in the list.
*/

int	ft_lstsize(t_list *lst)
{
	int	count; // Counter to store the number of elements

	count = 0; // Initialize count to 0

	while (lst) // Loop through the list until reaching the end
	{
		lst = lst->next; // Move to the next element
		count++; // Increment the counter
	}

	return (count); // Return the total count of elements in the list
}

