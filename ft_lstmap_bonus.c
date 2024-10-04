/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:31:18 by facosta           #+#    #+#             */
/*   Updated: 2024/10/04 18:55:17 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Loop over all the nodes of a given list and apply the method `f` to the
// contents of each node. Create a new list resulting from correctly applying
// `f` on each node successively.
// The given method `del` is used to eliminate the content of a node, if
// necessary
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mapped_lst;
	t_list	*temp;

	mapped_lst = NULL;
	while (lst)
	{
		temp = ft_lstnew(lst->content);
		if (!temp)
		{
			ft_lstclear(&mapped_lst, del);
			return (NULL);
		}
		temp->content = (*f)(temp->content);
		ft_lstadd_back(&mapped_lst, temp);
		lst = lst->next;
	}
	return (mapped_lst);
}
