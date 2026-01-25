/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:02:44 by tkorytko          #+#    #+#             */
/*   Updated: 2026/01/25 17:34:10 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *s, char c)
{
	int		words;
	bool	in_word;

	words = 0;
	while (*s)
	{
		in_word = 0;
		while (*s == c)
			++s;
		while (*s != c && *s)
		{
			if (!in_word)
			{
				++words;
				in_word = 1;
			}
			++s;
		}
	}
	return (words);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor;
	char		*next_word;
	int			len;
	int			i;

	len = 0;
	i = 0;
	cursor = 0;
	while (s[cursor] == c)
		++cursor;
	while ((s[cursor + len] != c) && s[cursor + len])
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *s, char c)
{
	int		words_count;
	char	**result_array;
	int		i;

	words_count = count_words(s, c);
	if (!words_count)
		exit(1);
	result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!result_array)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			result_array[i] = malloc(sizeof(char));
			if (!result_array[i])
				return (NULL);
			result_array[i++][0] = '\0';
			continue ;
		}
		result_array[i++] = get_next_word(s, c);
	}
	result_array[i++] = NULL;
	return (result_array);
}
