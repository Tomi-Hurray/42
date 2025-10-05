/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 15:06:48 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/05 15:45:55 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trims;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	trims = malloc(ft_strlen(s1));
	if (!trims)
		return (NULL);
	while (trims[i++] != '\0')
	{
		while (set[j] != '\0')
		{
			if (trims[i] == set[j])
			{
				break ;
			}
			j++;
		}
		i++;
		j = 0;
	}
}
