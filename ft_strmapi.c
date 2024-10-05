/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:59:59 by facosta           #+#    #+#             */
/*   Updated: 2024/10/05 13:54:49 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len_s;
	size_t	iter_s;

	if (!s)
		return (ft_strdup(""));
	len_s = ft_strlen(s);
	res = ft_calloc(len_s + 1, sizeof(char));
	if (!res)
		return (NULL);
	iter_s = 0;
	while (iter_s < len_s)
	{
		res[iter_s] = (*f)(iter_s, s[iter_s]);
		++iter_s;
	}
	res[iter_s] = 0;
	return (res);
}

// static char	ft_test_fn(unsigned int i, char c)
// {
// 	if (i % 2)
// 		c++;
// 	else
// 		c--;
// 	return (c);
// }

// int	main(void)
// {
// 	char	str[34] = "hello world :)";
// 	char	*dest = ft_strmapi(str, ft_test_fn);
// 	ft_putendl_fd(dest, 1);
// }
