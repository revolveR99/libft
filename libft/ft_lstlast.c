/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:29:50 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:47:29 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstlast function returns a pointer to the last element of the linked list 'lst'.
** It returns NULL if 'lst' is NULL or if the list is empty.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst) // Check if the list is empty
		return (NULL);

	while (lst->next != NULL) // Traverse the list until the last element is found
		lst = lst->next;

	return (lst); // Return a pointer to the last element
}

