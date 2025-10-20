/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:38:09 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/02 17:37:29 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		m;
	int		res_value;
	char	*str;

	str = (char *)nptr;
	m = 1;
	i = 0;
	res_value = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		m = -m;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res_value = res_value * 10 + (str[i] - '0');
		i++;
	}
	return (res_value * m);
}
