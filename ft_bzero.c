/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:40:46 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 19:49:13 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>  // EXT
// #include <stdio.h>  //EXT
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	int	str[4];

// 	str[0] = 43;
// 	str[1] = 2;
// 	str[2] = -254;
// 	// printf("%s\n", str);
// 	ft_bzero(&str, 20);
// 	// printf("%s\n", str);

// 	for (int i=0; i < 4; i++)
// 		printf("%d", str[i]);
// }