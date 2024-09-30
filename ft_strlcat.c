/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 22:42:55 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:52:15 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*dst && i < size)
	{
		++dst;
		++i;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			*dst++ = src[j];
		++j;
	}
	*dst = 0;
	return (i + j);
}

// int	main(void)
// {
// 	char	dest[100] = "sdjhgfdfjg";
// 	char	src[20] = "hello world ";
// 	int		res = ft_strlcat(dest, src, 11);
// 	printf("len: %d, dest: %s\n", res, dest);
// }