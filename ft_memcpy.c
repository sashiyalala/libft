/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:50:50 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 20:17:30 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest || src)
	{
		while (n-- > 0)
			ft_memset(dest + n, (int) *(unsigned char *)(src + n), 1);
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
