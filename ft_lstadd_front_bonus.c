/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:38:41 by facosta           #+#    #+#             */
/*   Updated: 2024/10/03 01:00:00 by facosta          ###   ########.fr       */
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

// t_list* bad_get_initilized_list() {
// 	t_list* my_list = NULL;

// 	int content_1 = 42;
// 	t_list element_1 = {&content_1, NULL};
// 	ft_lstadd_front(&my_list, &element_1);

// 	int content_2 = 43;
// 	t_list element_2 = {&content_2, NULL};
// 	ft_lstadd_front(&my_list, &element_2);

// 	return my_list;
// }

// t_list* get_initilized_list() {
// 	t_list* my_list = NULL;

//     {
// 	int* content_1 = (int*)malloc(sizeof(int));
//     *content_1 = 42;
// 	t_list* element_1 = (t_list*)malloc(sizeof(t_list));
//     *element_1 = (t_list){content_1, NULL};
// 	ft_lstadd_front(&my_list, element_1);
//     }

//     {
//     int* content_2 = (int*)malloc(sizeof(int));
//     *content_2 = 43;
// 	t_list* element_2 = (t_list*)malloc(sizeof(t_list));
//     *element_2 = (t_list){content_2, NULL};
// 	ft_lstadd_front(&my_list, element_2);
//     }

// 	return my_list;
// }

// void free_linked_list(t_list* my_list) {
//     t_list *current_node;

//     while (my_list)
//     {
//         free(my_list->content);
//         my_list->content = NULL;

//         current_node = my_list;
//         my_list = my_list->next;

//         free(current_node);
//         current_node = NULL;
//     }
// }

// int main()
// {
// 	t_list* my_list = get_initilized_list();

// 	printf("%d\n", *(int*)(my_list->content));
// 	printf("%d\n", *(int*)(my_list->next->content));

// }
