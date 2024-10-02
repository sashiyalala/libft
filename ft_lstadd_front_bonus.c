/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:38:41 by facosta           #+#    #+#             */
/*   Updated: 2024/10/02 20:16:42 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

// Add the node `new` at the beginning of the list `lst` where
// * lst: direction of a pointer pointing to the first node of a list
// * new: pointer to the node that you need to put at the beginning of a list
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// t_list **helper_create_list(int n_elems, ...)
// {
// 	t_list **header_ptr = malloc(sizeof(t_list *));
// 	va_list argp;

// 	*header_ptr = NULL;
// 	va_start(argp, n_elems);
// 	for (int i = 0; i < n_elems; i++)
// 		lstadd_back(header_ptr, lstnew(va_arg(argp, char *)));

// 	va_end(argp);
// 	return header_ptr;
// }

// int	main(void)
// {
// 	t_list	*my_list[4];
// 	int		uno = 42;
// 	int		dos = -42;
// 	int		tres = 2134345;
// 	int		new = 0;

// 	my_list[0]->content = &uno;
// 	my_list[0]->next = my_list[1];
// 	my_list[1]->content = &dos;
// 	my_list[1]->next = my_list[2];
// 	my_list[2]->content = &tres;
// 	my_list[2]->next = NULL;

// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("%d: %d\n", i, *((int *)my_list[i]->content));  // EXT??
// 	}
// }