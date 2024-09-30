/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:14:36 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 00:33:50 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uchar_c;

	ptr = (unsigned char *) s;
	uchar_c = (unsigned char) c;
	while (ptr < (unsigned char *) s + n)
	{
		if (*ptr == uchar_c)
			return ((void *) ptr);
		ptr++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[30] = "donde estara la a?";
// 	char c = 'a';
// 	printf("%s\n", (char *) memchr(str, c, 1));
// }