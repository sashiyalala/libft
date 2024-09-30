/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 12:49:13 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 13:26:39 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <stdlib.h>  // EXT
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_snstart;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	len_snstart = ft_strlen(s + start);
	if (len > len_snstart)
		len = len_snstart;
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}

// int	main(void)
// {
// 	char	str[20] = "hello world :)";
// 	char	*dest = ft_substr(str, 5, 3);
// 	printf("%s\n", dest);
// 	free(dest);
// }