/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:59:42 by facosta           #+#    #+#             */
/*   Updated: 2024/09/29 18:56:21 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

/*
Reserva (utilizando malloc(3)) un array de strings
resultante de separar la string ’s’ en substrings
utilizando el caracter ’c’ como delimitador. El
array debe terminar con un puntero NULL
*/

static size_t	ft_slices_in_str(char const *s, char c);
static void		ft_alloc_slices(char **slices, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**slices;
	size_t	n_slices;

	if (!s)
		return (NULL);
	n_slices = ft_slices_in_str(s, c);
	slices = (char **)ft_calloc(n_slices + 1, sizeof(char *));
	if (!slices)
		return (NULL);
	ft_alloc_slices(slices, s, c);
	return (slices);
}

/*
Loop over s to find the amount of slices in s.
NB: if we find more than 1 instance of c together, it's like
spaces. That doesn't cause a new slice.
E.g., "hello    world" is broken into just 2 slices by ' '
*/
static size_t	ft_slices_in_str(char const *s, char c)
{
	size_t	n_slices;

	n_slices = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
			++n_slices;
		while (*s && *s != c)
			++s;
	}
	return (n_slices);
}

/*
Loop over s to identify each slice again, but this time fill each
element of the slices array with each slice
*/
static void	ft_alloc_slices(char **slices, char const *s, char c)
{
	char		**ptr_slices;
	char const	*s_ptr;

	s_ptr = s;
	ptr_slices = slices;
	while (*s_ptr)
	{
		while (*s == c)
			++s;
		s_ptr = s;
		while (*s_ptr && *s_ptr != c)
			++s_ptr;
		if (*s_ptr == c || s_ptr > s)
		{
			*ptr_slices = ft_substr(s, 0, s_ptr - s);
			s = s_ptr;
			++ptr_slices;
		}
	}
	*ptr_slices = NULL;
}

// int main(void)
// {
// 	char	str[100] = "Hola*mundo*cruel**bye***bye**";
// 	char	**slices = ft_split(str, '*');

// 	while (*slices)
// 	{
// 		printf("%s\n", *slices);
// 		slices++;
// 	}
// }
