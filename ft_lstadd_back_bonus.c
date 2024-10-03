/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:25:35 by facosta           #+#    #+#             */
/*   Updated: 2024/10/03 19:33:39 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add the node `new` at the end of the list `lst`
// E.g., by creating a temporal node to loop over the nodes in lst
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*iter_lst;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	iter_lst = *lst;
	while (iter_lst->next)
		iter_lst = iter_lst->next;
	iter_lst->next = new;
}
