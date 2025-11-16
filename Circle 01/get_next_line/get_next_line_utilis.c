/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utilis.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:07:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/11/16 15:44:35 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		j;
	char	*string;
	char	cc;

	cc = c;
	string = (char *)s;
	j = 0;
	while (string[j] != 0)
	{
		if (string[j] == cc)
		{
			return ((char *)&s[j]);
		}
		j++;
	}
	if (string[j] == cc)
		return ((char *)&s[j]);
	else
		return (0);
}

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	i;

	i = 0;
	s_dup = malloc(ft_strlen(s) + 1);
	if (!s_dup)
		return (NULL);
	while (i < ft_strlen(s) + 1)
	{
		s_dup[i] = s[i];
		i++;
	}
	return (s_dup);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subs = ft_calloc(len + 1, sizeof(char));
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	return (subs);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joint;

	if (!s1 && !s2)
		return (NULL);
	s1_len = (ft_strlen(s1));
	s2_len = (ft_strlen(s2));
	joint = malloc(s1_len + s2_len + 1);
	if (!joint)
		return (NULL);
	ft_memcpy(joint, s1, s1_len);
	ft_memcpy(joint + s1_len, s2, s2_len);
	joint[s1_len + s2_len] = 0;
	return (joint);
}
