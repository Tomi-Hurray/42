/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:07:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/12/11 16:20:38 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *s, int c)
{
	int		j;
	char	cc;

	cc = c;
	j = 0;
	if (!s)
		return (NULL);
	while (s[j] != 0)
	{
		if (s[j] == cc)
		{
			return ((char *)&s[j]);
		}
		j++;
	}
	if (s[j] == cc)
		return ((char *)&s[j]);
	return (0);
}

char	*ft_strdup(char *s)
{
	char	*s_dup;
	size_t	i;

	if (!s)
		return (NULL);
	s_dup = malloc(ft_strlen(s) + 1);
	if (!s_dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_dup[i] = s[i];
		i++;
	}
	s_dup[i] = '\0';
	return (s_dup);
}

size_t	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		subs = malloc(1);
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (len > s_len - start)
		len = s_len - start;
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	i = -1;
	while (++i < len)
		subs[i] = s[start + i];
	return (subs[i] = 0, subs);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joint;
	int		s1_len;
	int		s2_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_len = (ft_strlen(s1));
	s2_len = (ft_strlen(s2));
	joint = malloc(s1_len + s2_len + 1);
	if (!joint)
		return (NULL);
	fill_joint(joint, s1, s2);
	return (joint);
}
