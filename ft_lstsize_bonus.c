/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:22:21 by facosta           #+#    #+#             */
/*   Updated: 2024/10/02 20:29:39 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Count the amount of elements in a given list
int	ft_lstsize(t_list *lst)
{
	int		len;

	len = 0;
	while (lst && (++len))
		lst = lst->next;
	return (len);
}

// int	main(void)
// {

// }