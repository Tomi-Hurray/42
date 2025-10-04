/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 18:08:55 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/04 18:26:05 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dup;
	size_t	i;

	i = 0;
	s_dup = malloc(ft_strlen(s) + 1);
	while (i < ft_strlen(s) + 1)
	{
		s_dup[i] = s[i];
		i++;
	}
	return (s_dup);
}
