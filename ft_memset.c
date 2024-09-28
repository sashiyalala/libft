/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:06:45 by facosta           #+#    #+#             */
/*   Updated: 2024/09/25 22:56:22 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>  //EXT
// #include <stdio.h>  //EXT

void	*ft_memset(void *s, int c, size_t n)
{
	void	*ptr;

	ptr = s;
	while (ptr < (s + n))
	{
		*(char *) ptr = c;
		ptr++;
	}
	return (s);
}

// int	main(void)
// {
// 	int	str[4];

// 	str[0] = 43;
// 	str[1] = 2;
// 	str[2] = -254;
// 	// printf("%s\n", str);
// 	// printf("%s\n", (char *) ft_memset(&str, 'A', 20));

// 	for (int i=0; i < 4; i++)
// 		printf("%d", str[i]);
// }