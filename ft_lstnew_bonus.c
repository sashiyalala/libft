/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:29:15 by facosta           #+#    #+#             */
/*   Updated: 2024/10/02 00:40:39 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <stdlib.h>  // EXT
#include "libft.h"

/*
Create a new node using `malloc`. The attribute `content` is initialized with
the content of the argument `content`. The attribute `next` is initialized with
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	new_element = ft_calloc(1, sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}

// void	test_int(void)
// {
// 	int		nums[4];
// 	t_list	*elem;

// 	nums[0] = 42;
// 	nums[1] = -42;
// 	nums[2] = 0;
// 	nums[3] = 314;
// 	// TODO: FINISH
// }

// void	test_char(void)
// {
// 	char	*str = "Hello";
// 	t_list	*elem;

// 	elem = ft_lstnew(str);
// 	printf("%s\n", (char *)elem->content);
// 	printf("%d\n", (elem->next == NULL));
// }
// int main(void)
// {
// 	test_char();
// 	test_int();
// }
