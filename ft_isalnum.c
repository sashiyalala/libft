/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:11:53 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 19:17:33 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main(void)
// {
//     int equal_results = 0;

//     for (int i = 0; i < 255; i++)
//     {
//         int isdigit_og = isalnum(i);
//         int isdigit_ft = ft_isalnum(i);
//         printf("%c - OG: %d 42: %d\n", i, isdigit_og, isdigit_ft);
//     }
//     printf("%c - OG: %d 42: %d\n", 255, isalnum(255), ft_isalnum(255));
// }
