/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:22:21 by facosta           #+#    #+#             */
/*   Updated: 2024/10/05 15:06:41 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include <stdio.h> // EXT
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


// t_list* get_initilized_list() {
// 	t_list* my_list = NULL;

// 	// Notice how content_1 e.g. won't exist outside of these brackets!!
// 	// Even in the same function!
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

// 	printf("%d\n", ft_lstsize(my_list));

// 	free_linked_list(my_list);
// }
