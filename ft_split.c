/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:32:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/07 21:01:13 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	word_count(char const *s, char c)
{
	int	word;
	int	i;
	char	*string;

	word = 0;
	i = 0;
	string = ft_strtrim(s, &c);
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
/*
static int	strclen(char const *s, char c)
{
	int	x;

	x = 0;
	while (s[x] != c && s[x] != '\0')
	{
		x++;
	}
	return (x);
}
*/
char	**ft_split(char const *s, char c)
{
	//char	**matrix;
	//int		i;
	//char	*array;

	printf("words: %d\n", word_count(s, c));
	//while (*matrix[i])
	//{
	//	//array[i] = malloc(strclen(ft_strtrim(s, (char *)c), (char *)c) + 1);
	//		i++;
	//	printf("array: %s\n", *array[i]);
	//}
	return (NULL);
}
