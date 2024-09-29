/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 00:30:45 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:14:29 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		++i;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str[10] = "hello";
// 	char	str2[10] = "hella";
// 	int		n = 5;

// 	printf("OG: %d vs 42: %d",
// 		memcmp(str, str2, n), ft_memcmp(str, str2, n));
// }