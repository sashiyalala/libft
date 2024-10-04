/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta <facosta@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:59:42 by facosta           #+#    #+#             */
/*   Updated: 2024/10/04 19:27:54 by facosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>  // EXT
#include "libft.h"

static void		*ft_free_str_array(char **strs, size_t len);
static size_t	ft_count_words(const char *s, char c);
static char		*ft_alloc_word(const char *s, size_t begin, size_t end);
static char		**ft_fill_words(char **words, const char *s, char c);

/*
Reserve (using `malloc`) an array of strings such that they're the result of
separating the given string `s` in substrings by the separator char `c`.
The array must finish with a NULL ptr.
*/
char	**ft_split(const char *s, char c)
{
	char	**res;

	res = (char **) ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	return (ft_fill_words(res, s, c));
}

/*
Loop over s to find the amount of words in s. We use the `in_word` variable
as a boolean to keep track of whether the last char was a separator or not.
NB: if we find more than 1 instance of c together, it's like
spaces. That doesn't cause a new word.
E.g., "hello    world" is broken into just 2 words by ' '
*/
static size_t	ft_count_words(const char *s, char c)
{
	int		in_word;
	size_t	words;

	in_word = 0;
	words = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			words++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

/*
Loop over s to identify each word again, but this time fill each
element of the words array with each word
*/
static char	*ft_alloc_word(const char *s, size_t begin, size_t end)
{
	char	*word;
	size_t	iter_w;

	iter_w = 0;
	word = (char *) ft_calloc(end - begin + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (begin < end)
	{
		word[iter_w] = s[begin];
		++iter_w;
		++begin;
	}
	word[iter_w] = 0;
	return (word);
}

static void	*ft_free_str_array(char **strs, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	**ft_fill_words(char **words, const char *s, char c)
{
	long	s_word;
	size_t	iter_s;
	size_t	iter_words;
	size_t	len_s;

	iter_s = 0;
	iter_words = 0;
	s_word = -1;
	len_s = ft_strlen(s);
	while (iter_s <= len_s)
	{
		if (s[iter_s] != c && s_word < 0)
			s_word = (long) iter_s;
		else if ((s[iter_s] == c || iter_s == len_s) && s_word >= 0)
		{
			words[iter_words] = ft_alloc_word(s, (size_t) s_word, iter_s);
			if (!(words[iter_words]))
				return (ft_free_str_array(words, iter_words));
			s_word = -1;
			iter_words++;
		}
		iter_s++;
	}
	return (words);
}

// int main(void)
// {
// 	char	str[100] = "Hola*mundo*cruel**bye***bye**";
// 	char	**words = ft_split(str, '*');

// 	while (*words)
// 	{
// 		printf("%s\n", *words);
// 		words++;
// 	}
// }
