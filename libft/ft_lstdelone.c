/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zabdulza <zabdulza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:32:11 by zero              #+#    #+#             */
/*   Updated: 2024/02/17 16:44:59 by zabdulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_lstdelone function deallocates the memory occupied by the element 'lst'.
** It calls the function 'del' to delete the content of the element.
** Finally, it frees the memory allocated for the element itself.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del) // Check if 'lst' or 'del' is NULL
		return;

	del(lst->content); // Delete the content of the element
	free(lst); // Free the memory allocated for the element
}

