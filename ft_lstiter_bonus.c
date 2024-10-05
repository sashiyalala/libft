/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:12:43 by facosta           #+#    #+#             */
/*   Updated: 2024/10/05 15:21:33 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

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

// void test_double(void *foo)
// {
// 	int *num;

// 	num = (int *)foo;
// 	*num *= 2;
// }

// int main()
// {
// 	t_list* my_list = get_initilized_list();

// 	printf("%d\n", *(int*)(my_list->content));
// 	printf("%d\n", *(int*)(my_list->next->content));

// 	ft_lstiter(my_list, test_double);

// 	printf("%d\n", *(int*)(my_list->content));
// 	printf("%d\n", *(int*)(my_list->next->content));
// 	free_linked_list(my_list);
// }
