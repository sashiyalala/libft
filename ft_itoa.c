/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 14:30:58 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 17:43:40 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse. */

// #include <stdio.h>  // EXT
// #include <stdlib.h>  // EXT
#include "libft.h"

static size_t	ft_number_len(int n);
static void		ft_itoa_in_str(int n_len, int offset, int n, char *str);

char	*ft_itoa(int n)
{
	int		offset;
	int		n_len;
	char	*res;

	offset = 0;
	n_len = ft_number_len(n);
	res = ft_calloc(n_len + 1, sizeof(char));
	if (!res)
		return (NULL);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = -(n + 2000000000);
		offset = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_itoa_in_str(n_len, offset, n, res);
	res[n_len] = '\0';
	return (res);
}

static size_t	ft_number_len(int n)
{
	size_t	n_len;

	n_len = 0;
	if (n <= 0)
		n_len++;
	while (n != 0)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}

static void	ft_itoa_in_str(int n_len, int offset, int n, char *str)
{
	while (n_len > offset)
	{
		str[n_len - 1] = n % 10 + '0';
		n = n / 10;
		n_len--;
	}
}

// int	main(void)
// {
// 	char	*int_as_str = ft_itoa(235845);
// 	printf("%s\n", int_as_str);
// 	free(int_as_str);
// }
