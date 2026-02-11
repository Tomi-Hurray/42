/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_digitup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:53:00 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/21 19:29:00 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_digitup(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (printf_digitup(-n, base) + 1);
	}
	else if (n < base)
		return (printf_char(symbols[n]));
	else
	{
		count = printf_digitup(n / base, base);
		return (count + printf_digitup(n % base, base));
	}
	return (count);
}
