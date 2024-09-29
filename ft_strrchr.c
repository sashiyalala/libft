/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:43:37 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 00:14:11 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*res_ptr;
	char	char_c;

	char_c = (char) c;
	res_ptr = NULL;
	ptr = (char *) s;
	while (*ptr)
	{
		if (*ptr == char_c)
			res_ptr = ptr;
		ptr++;
	}
	if (*ptr == char_c)
		res_ptr = ptr;
	return (res_ptr);
}

// int	main(void)
// {
// 	char	str[123] = "here is a letter B jajaB hzahhf";
// 	char	my_char = 'B';
// 	printf("str starting from last occurrence of char \"%c\": \n%s",
// 		my_char, ft_strrchr(str, my_char));
// }
