/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:33:14 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:44:29 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstclear function deallocates and clears the entire linked list pointed to by 'lst'.
** For each element, the function 'del' is called to delete the content.
** Finally, the pointer to the linked list is set to NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp; // Temporary pointer to iterate through the list

	if (!lst || !del) // Check if 'lst' or 'del' is NULL
		return;

	while (*lst) // Loop until the end of the list
	{
		tmp = (*lst)->next; // Store the next pointer to avoid losing reference
		ft_lstdelone(*lst, del); // Delete the current element
		*lst = tmp; // Move to the next element
	}

	*lst = NULL; // Set the pointer to the list to NULL
}

