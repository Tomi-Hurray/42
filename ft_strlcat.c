/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 19:27:35 by tkorytko          #+#    #+#             */
/*   Updated: 2025/09/28 15:49:19 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	
	//j = ft_strlen((const char *)dst);
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
	//dst[i + j] = '\0';
	return (j + ft_strlen(src));
}
