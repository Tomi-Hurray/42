/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:24:13 by tkorytko          #+#    #+#             */
/*   Updated: 2026/01/25 18:39:24 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *nptr)
{
	long	i;
	long	m;
	long	res_value;
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
