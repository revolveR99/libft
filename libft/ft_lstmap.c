/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:36:12 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:48:52 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstmap function creates a new list resulting from applying the function 'f' to each
** element of the original list 'lst'.
** If memory allocation fails during the process, it deletes the newly created list and returns NULL.
** It requires functions 'f' to transform the content of each element and 'del' to delete the content
** in case of an error.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new; // Pointer to the new list
	t_list	*temp; // Temporary pointer to hold the new elements

	if (!lst || !f || !del) // Check if any required parameter is NULL
		return (NULL);

	new = NULL; // Initialize the new list as empty

	while (lst)
	{
		// Apply function 'f' to the content of each element and create a new element with the result
		temp = ft_lstnew((*f)(lst->content));

		if (temp == NULL) // Check if memory allocation fails
		{
			// If memory allocation fails, delete the newly created list and return NULL
			ft_lstclear(&new, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new, temp); // Add the new element to the end of the new list

		lst = lst->next; // Move to the next element in the original list
	}

	return (new); // Return the new list
}

