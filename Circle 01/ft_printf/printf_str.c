/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:28:19 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/21 20:09:05 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_str(char *str)
{
	int	count;

	if (!str)
		return (write(1, "(nil)", 5));
	count = 0;
	while (*str != '\0')
	{
		printf_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
