/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:06:48 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/07 12:30:48 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_front(char *string, char const	*tset)
{
	size_t	start;
	size_t	j;

	start = 0;
	j = 0;
	while (tset[j] != '\0')
	{
		if (string[start] == tset[j])
		{
			start++;
			j = 0;
		}
		else
			j++;
	}
	return (start);
}

static size_t	trim_back(char	*string, char const	*tset)
{
	size_t	end;
	size_t	j;

	end = (ft_strlen(string) - 1);
	j = 0;
	while (tset[j] != '\0')
	{
		if (string[end] == tset[j])
		{
			end--;
			j = 0;
		}
		else
			j++;
	}
	return (end + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	x;
	size_t	j;
	size_t	i;
	char	*res;

	x = 0;
	trims = malloc(ft_strlen(s1) + 1);
	ft_memcpy(trims, s1, ft_strlen(s1));
	trims[ft_strlen(s1)] = '\0';
	if (!trims)
		return (NULL);
	i = trim_front(trims, set);
	j = trim_back(trims, set);
	res = malloc(j - i + 1);
	if (!res)
		return (NULL);
	while (x < j && i <j)
	{
		res[x++] = trims[i++];
	}
	res[x] = '\0';
	return (res);
}
