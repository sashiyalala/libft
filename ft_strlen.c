/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:31:47 by facosta           #+#    #+#             */
/*   Updated: 2024/09/28 19:39:20 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// int	main(void)
// {
// 	char	str[20] ="hola mundito";
// 	char	str2[10] = "";
// 	char	str3[3] = "what";

// 	printf("size of \"%s\" - OG: %d 42: %d\n",
// 		str, strlen(str), ft_strlen(str));
// 	printf("size of \"%s\" - OG: %d 42: %d\n",
// 		str2, strlen(str2), ft_strlen(str2));
// 	printf("size of \"%s\" - OG: %d 42: %d\n",
// 		str3, strlen(str3), ft_strlen(str3));
// }