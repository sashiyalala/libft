/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:35:46 by facosta           #+#    #+#             */
/*   Updated: 2024/10/03 19:49:53 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// Given a node `lst`:
// -> free the memory of its `content` attribute using the `del` function as
//   a parameter
// -> free the memory of the node
// -> (NB) the memory of `next` must not be freed
// -> `del` is a pointer to the fn used to liberate the node's `content`
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
