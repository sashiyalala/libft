/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:58:33 by facosta           #+#    #+#             */
/*   Updated: 2024/10/05 14:06:14 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>  // EXT
// #include <stdio.h>  // EXT
#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n.", ft_tolower(' '));
// }