/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:30:49 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:43:36 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstadd_back function adds the element 'new' at the end of the list.
** If 'lst' is NULL, it sets 'lst' to be the new element.
** Otherwise, it traverses the list to find the last element and appends 'new' to it.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last; // Pointer to the last element of the list

	if (!*lst) // If the list is empty, set 'lst' to be the new element
		*lst = new;
	else
	{
		last = ft_lstlast(*lst); // Find the last element of the list
		last->next = new; // Append 'new' to the end of the list
	}
}

