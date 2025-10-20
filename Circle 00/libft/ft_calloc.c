/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 16:53:02 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/04 18:07:15 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ar;
	size_t			i;

	i = 0;
	if (size <= 0 || nmemb <= 0)
		return (malloc(1));
	else if (nmemb != 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	ar = malloc(nmemb * size);
	if (!ar)
		return (NULL);
	while (i < size * nmemb)
	{
		ar[i] = 0;
		i++;
	}
	return (ar);
}
