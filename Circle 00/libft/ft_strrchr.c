/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:22:40 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/02 16:26:56 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*string;

	string = (char *)s;
	j = ft_strlen(string);
	while (j >= 0)
	{
		if (string[j] == (char)c)
		{
			return ((char *)&s[j]);
		}
		j--;
	}
	return (NULL);
}
