/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:32:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/09 16:48:51 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_malloc(char **word_vector, int p, size_t b)
{
	int	i;

	i = 0;
	word_vector[p] = malloc(b);
	if (NULL == word_vector[p])
	{
		while (i < p)
			free(word_vector[i++]);
		free(word_vector);
		return (1);
	}
	return (0);
}

static int	fill(char **word_vector, char const *s, char c)
{
	size_t		x;
	int			i;

	i = 0;
	while (*s)
	{
		x = 0;
		while (*s == c && *s)
			++s;
		while (*s != c && *s)
		{
			++x;
			++s;
		}
		if (x)
		{
			if (s_malloc(word_vector, i, x + 1))
				return (1);
			ft_strlcpy(word_vector[i], s - x, x + 1);
		}
		++i;
	}
	return (0);
}

static size_t	word_count(char const *s, char c)
{
	int		word;
	size_t	i;
	char	*string;

	word = 0;
	i = 0;
	string = ft_strtrim(s, &c);
	if (string[i] == '\0')
	{
		free(string);
		return (0);
	}
	while (string[i])
	{
		if (string[i] == c && string[i + 1] != c)
		{
			word++;
		}
		i++;
	}
	word++;
	free(string);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**word_vector;
	size_t	words;

	if (NULL == s)
		return (word_vector = NULL);
	words = 0;
	words = word_count(s, c);
	word_vector = ft_calloc((words + 1), sizeof(char *));
	if (!word_vector)
		return (NULL);
	word_vector[words] = NULL;
	if (fill(word_vector, s, c))
		return (NULL);
	return (word_vector);
}
