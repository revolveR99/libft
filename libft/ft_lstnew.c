/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:55:37 by zabdulza          #+#    #+#             */
/*   Updated: 2024/02/17 16:49:13 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstnew function creates a new list element with the given content.
** It allocates memory for the new element, initializes its content and next pointer,
** and returns a pointer to the newly created element.
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*list; // Pointer to the newly created list element

	list = malloc(sizeof(t_list)); // Allocate memory for the new element
	if (!list) // Check if memory allocation fails
		return (NULL);

	list->content = content; // Set the content of the new element
	list->next = NULL; // Set the next pointer to NULL as it's the last element

	return (list); // Return a pointer to the new element
}

