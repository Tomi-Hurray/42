/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 19:27:35 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/12 14:12:13 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dst[j] && j < size)
		j++;
	if (j == size)
		return (size + ft_strlen(src));
	while (src[i] && (j + i + 1 < size))
	{
		dst[i + j] = src[i];
		i++;
	}
	return (j + ft_strlen(src));
}
