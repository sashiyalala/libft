/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 01:00:17 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 01:14:20 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
// #include <stdlib.h>  // EXT
#include "libft.h"

static int	ft_iswhitespace(int c)
{
	return (
		c == '\t' || c == '\r' || c == ' '
		|| c == '\f' || c == '\v' || c == '\n'
	);
}

int	ft_atoi(const char *nptr)
{
	char	*ptr;
	int		sign;
	int		abs;

	ptr = (char *) nptr;
	sign = 1;
	abs = 0;
	while (ft_iswhitespace(*ptr))
		++ptr;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		++ptr;
	}
	while (ft_isdigit(*ptr))
	{
		abs = abs * 10 + (*ptr - '0');
		++ptr;
	}
	return (sign * abs);
}

// int	main(void)
// {
// 	printf("42: %d\n", ft_atoi("+15asd345"));
// }
