/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 19:27:35 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/16 16:56:55 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	i;

	i = ft_strlen(src);
	j = ft_strlen(dst);
	if (j > size)
		j = size;
	if (j == size)
	{
		return (i + j);
	}
	if (i + j >= size)
	{
		ft_memcpy(dst + j, src, size - j - 1);
		dst[size - 1] = '\0';
	}
	else
		ft_memcpy(dst + j, src, i + 1);
	return (i + j);
}
