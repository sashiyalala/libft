/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:03:59 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 19:16:47 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT
#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// int main(void)
// {
//     int equal_results = 0;

//     for (int i = 0; i < 255; i++)
//     {
//         int isdigit_og = isdigit(i);
//         int isdigit_ft = ft_isdigit(i);
//         printf("%c - OG: %d 42: %d\n", i, isdigit_og, isdigit_ft);
//     }
//     printf("%c - OG: %d 42: %d\n", 255, isdigit(255), ft_isdigit(255));
// }
