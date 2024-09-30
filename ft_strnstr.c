/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:39:17 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 00:59:49 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // EXT
#include <string.h>  // EXT
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!*little)
		return ((char *) big);
	if (!len)
		return (NULL);
	while (*big && little_len <= len)
	{
		if (*big == *little && !ft_strncmp(big, little, little_len))
			return ((char *) big);
		++big;
		--len;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	needle[4] = "wo";
// 	char	haystack[40] = "hello woworld!";

// 	printf("%s\n", ft_strnstr(haystack, needle, ft_strlen(haystack)));
// }