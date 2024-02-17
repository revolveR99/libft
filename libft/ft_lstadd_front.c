/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:24:56 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:44:06 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstadd_front function adds the element 'new' at the beginning of the linked list 'lst'.
** The pointer to the first element of the list is updated to point to 'new'.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst; // Set the next pointer of 'new' to point to the current first element
	*lst = new; // Update the pointer to the first element to point to 'new'
}

