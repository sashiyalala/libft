/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:08:09 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 18:26:10 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}

// int main(void)
// {
//     int equal_results = 0;

//     for (int i = 0; i < 255; i++)
//     {
//         int isalpha_og = isalpha(i);
//         int isalpha_ft = ft_isalpha(i);
//         printf("%c - OG: %d 42: %d\n", i, isalpha_og, isalpha_ft);
//     }
//     printf("%c - OG: %d 42: %d\n", 255, isalpha(255), ft_isalpha(255));
// }
