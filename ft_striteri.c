/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:00:09 by facosta           #+#    #+#             */
/*   Updated: 2024/10/05 14:55:50 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	k;

	k = 0;
	if (s)
	{
		while (*(s + k))
		{
			(*f)(k, s + k);
			++k;
		}
	}
}

// static void	ft_test_fn(unsigned int i, char *s)
// {
// 	if (i % 2)
// 		(*s)++;
// 	else
// 		(*s)--;
// }

// int	main(void)
// {
// 	char	str[34] = "hello world :)";
// 	ft_striteri(str, ft_test_fn);
// 	ft_putendl_fd(str, 1);
// }
