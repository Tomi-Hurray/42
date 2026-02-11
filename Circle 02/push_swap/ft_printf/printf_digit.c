/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:19:47 by tomi              #+#    #+#             */
/*   Updated: 2025/10/21 19:28:10 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_digit(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (printf_digit(-n, base) + 1);
	}
	else if (n < base)
		return (printf_char(symbols[n]));
	else
	{
		count = printf_digit(n / base, base);
		return (count + printf_digit(n % base, base));
	}
	return (count);
}
