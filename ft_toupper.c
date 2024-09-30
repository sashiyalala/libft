/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:58:33 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:28:10 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT
#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n.", ft_toupper(' '));
// }