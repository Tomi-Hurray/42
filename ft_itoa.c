/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:49:56 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/09 19:19:23 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	memory_count(long tmp)
{
	int	memory;

	memory = 0;
	if (tmp < 0)
	{
		memory++;
		tmp = tmp *(-1);
	}
	if (tmp == 0)
		memory++;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		memory++;
	}
	return (memory);
}

char	*ft_itoa(int n)
{
	char	*string;
	size_t	i;
	int		memory;
	long	tmp;

	tmp = n;
	memory = memory_count(tmp);
	string = malloc((memory + 1) * sizeof(char));
	string[0] = '0';
	if (!string)
		return (NULL);
	if (tmp < 0)
		tmp = tmp * (-1);
	i = (memory - 1);
	if (n < 0)
		string[0] = '-';
	while (tmp != 0)
	{
		string[i] = ((tmp % 10) + 48);
		tmp = tmp / 10;
		i--;
	}
	string[memory] = '\0';
	return (string);
}
