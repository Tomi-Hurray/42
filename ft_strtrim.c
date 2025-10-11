/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:06:48 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/07 17:23:38 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	trim_front(const char *string, char const	*tset)
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

static size_t	trim_back(const char *string, char const	*tset)
{
	size_t	end;
	size_t	j;

	if (ft_strlen(string) == 0)
		return (0);
	else
		end = (ft_strlen(string) - 1);
	j = 0;
	while (tset[j] != '\0' && end >= 1)
	{
		if (string[end] == tset[j])
		{
			end--;
			j = 0;
		}
		else
		{
			j++;
		}
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	x;
	size_t	end;
	size_t	start;

	x = 0;
	start = trim_front(s1, set);
	end = trim_back(s1, set);
	if (end < start || end == 0)
		return (ft_strdup(""));
	trims = malloc(end - start + 2);
	if (!trims)
		return (ft_strdup(""));
	while (start <= end)
		trims[x++] = s1[start++];
	trims[x] = '\0';
	return (trims);
}
