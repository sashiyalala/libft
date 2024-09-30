/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 20:26:37 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:14:56 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest || src)
	{
		if (dest < src)
			return (ft_memcpy(dest, src, n));
		while (n--)
			ft_memset(dest + n, (int) *(unsigned char *)(src + n), 1);
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "sfidfjhgfdg jhf\n ef";
// 	char	dest[1];

// 	printf("before: %s\n", dest);
// 	memmove(dest, src, 10);
// 	printf("after:  %s\n", dest);
// }
