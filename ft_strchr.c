/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 14:47:23 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/12 14:12:40 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
