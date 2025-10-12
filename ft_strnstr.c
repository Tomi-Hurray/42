/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 19:22:36 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/12 14:11:10 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;

	x = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len--)
	{
		while (*big == *little)
		{
			little++;
			big++;
			if (*little == '\0')
				return ((char *)big - x);
			else if (*big != *little)
				big--;
		}
		big++;
	}
	return (NULL);
}
