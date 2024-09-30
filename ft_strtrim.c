/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:38:15 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 14:31:19 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)
*/

// #include <stdio.h>  // EXT
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	while (s1[end] && ft_strchr(set, s1[end]))
		--end;
	res = ft_substr(s1, start, end - start + 1);
	return (res);
}

// int	main(void)
// {
// 	char	str[34] = "hello woworld!:)";
// 	char	set[5] = "wo";

// 	printf("%s\n", ft_strtrim(str, set));
// }
