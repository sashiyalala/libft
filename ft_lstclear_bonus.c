/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:51:32 by facosta           #+#    #+#             */
/*   Updated: 2024/10/03 20:06:45 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Given a pointer to a node `lst`, delete and free that node and all of the
// nodes connected after it, using the `del` function and `free`
// As `lst` is a pointer to a pointer of a node, we use a variable `iter_list`
// to point to the node of the list, i.e, its content
// Then, we use `iter_list` to loop over the nodes and:
//	1. Store,to avoid missing it, the direction of the next node in `temp`
//	2. Apply the `del` function to the `content` of the current node to free
//		that memory
//	3. Free the current node.
//	4. Update the iterable pointer to point to the stored node in `temp`
// -> (NB) Notice how we need to store the next node in a temp variable before
//		deleting the node cause if we didn't do that, we would lose any way to
//		access the next node, which is a big problem.
// -> (NB) Notice how we need to set `*lst` to `NULL` cause we just freed that.
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter_lst;
	t_list	*temp;

	if (!lst || !del)
		return ;
	iter_lst = *lst;
	while (iter_lst)
	{
		temp = iter_lst->next;
		ft_lstdelone(iter_lst, del);
		iter_lst = temp;
	}
	*lst = NULL;
}
