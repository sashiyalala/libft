/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:26:37 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 19:30:07 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT
#include "libft.h"

int	ft_isprint(int c)
{
	return (' ' <= c && c <= '~');
}

// int main(void)
// {
//     int equal_results = 0;

//     for (int i = 0; i < 255; i++)
//     {
//         int isprint_og = isprint(i);
//         int isprint_ft = ft_isprint(i);
//         printf("%c - OG: %d 42: %d\n", i, isprint_og, isprint_ft);
//     }
//     printf("%c - OG: %d 42: %d\n", 255, isprint(255), ft_isprint(255));
// }
