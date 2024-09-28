/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:20:20 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 19:25:28 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main(void)
// {
//     int equal_results = 0;

//     for (int i = 0; i < 255; i++)
//     {
//         int isascii_og = isascii(i);
//         int isascii_ft = ft_isascii(i);
//         printf("%c - OG: %d 42: %d\n", i, isascii_og, isascii_ft);
//     }
//     printf("%c - OG: %d 42: %d\n", 255, isascii(255), ft_isascii(255));
// 	printf("%c - OG: %d 42: %d\n", -42, isascii(-42), ft_isascii(-42));
// }
