/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:33:36 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 12:42:09 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (size)
	{
		i = 0;
		while (src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char	dest[100] = "sdjhgfdfjg";
// 	char	src[20] = "hello world ";
// 	int		src_len = ft_strlcpy(dest, src, 0);
// 	printf("len: %d, dest: %s\n", src_len, dest);
// }