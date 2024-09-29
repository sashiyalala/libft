/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:00:09 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 18:40:56 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.
 */

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
