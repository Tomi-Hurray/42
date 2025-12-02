/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:21:19 by tkorytko          #+#    #+#             */
/*   Updated: 2025/12/02 16:21:26 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	int		j;
	char	cc;

	cc = c;
	j = 0;
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

	i = 0;
	s_dup = malloc(ft_strlen(s) + 1);
	if (!s_dup)
		return (NULL);
	while (s[1])
	{
		s_dup[i] = s[i];
		i++;
	}
	s_dup[i] = 0;
	return (s_dup);
}

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	subs = malloc(len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = 0;
	return (subs);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joint;
	int		s1_len;
	int		s2_len;

	if (!s1 && !s2)
		return (NULL);
	s1_len = (ft_strlen(s1));
	s2_len = (ft_strlen(s2));
	joint = malloc(s1_len + s2_len + 1);
	if (!joint)
		return (NULL);
	fill_joint(joint, s1, s2);
	return (joint);
}