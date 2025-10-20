/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:36:28 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/14 17:38:32 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*desstination;
	const unsigned char	*source;
	size_t				i;

	i = 0;
	desstination = dest;
	source = src;
	if (desstination > source)
	{
		while (n--)
			desstination[n] = source[n];
	}
	else
	{
		while (i < n)
		{
			desstination[i] = source[i];
			i++;
		}
	}
	return (desstination);
}
