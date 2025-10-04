/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:44:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/09/24 19:40:22 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *estr, unsigned int c, size_t n)
{
	unsigned char	*ptr;

	ptr = estr;

	while (n--)
	{
		*ptr = (unsigned char) c;
		ptr++;
	}
	return (estr);
}
