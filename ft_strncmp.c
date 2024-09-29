/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:01:37 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:28:13 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	i = 0;
	us1 = (unsigned char *) s1;
	us2 = (unsigned char *) s2;
	while (i < n && (us1[i] || us2[i]))
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[10] = "hello";
// 	char	str2[10] = "hella";
// 	int		n = 5;

// 	printf("OG: %d vs 42: %d",
// 		strncmp(str, str2, n), ft_strncmp(str, str2, n));
// }
