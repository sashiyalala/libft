/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:20:28 by facosta           #+#    #+#             */
/*   Updated: 2024/10/04 19:27:56 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s) + 1;
	dest = malloc(len);
	if (!dest)
		return (dest);
	ft_memcpy(dest, s, len);
	return (dest);
}

// int	main(void)
// {
// 	char	str[20] = "hello world :)";
// 	char	*dest = ft_strdup(str);
// 	printf("%s\n", dest);
// 	free(dest);
// }