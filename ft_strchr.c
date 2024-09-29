/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 23:11:29 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 14:10:22 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <string.h>  // EXT
#include "libft.h"

/* Return the string starting from the first instance of the char c */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	char_c;

	char_c = (char) c;
	ptr = (char *) s;
	while (*ptr)
	{
		if (*ptr == char_c)
			return (ptr);
		ptr++;
	}
	if (*ptr == char_c)
		return (ptr);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[123] = "here is a letter B jajaB B";
// 	char	my_char = 'B';
// 	printf("str starting from 1st occurrence of char \"%c\": \n%s",
// 		my_char, ft_strchr(str, my_char));
// }
