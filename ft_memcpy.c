/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:50:50 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:14:45 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest || src)
	{
		while (i < n)
		{
			ft_memset(dest + i, (int) *(unsigned char *)(src + i), 1);
			i++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "sfidfjhgfdg jhf\n ef";
// 	char	dest[100] = "me van a sobreescribir :(";

// 	printf("before: %s\n", dest);
// 	ft_memcpy(dest, src, 10);
// 	printf("after:  %s\n", dest);
// }
