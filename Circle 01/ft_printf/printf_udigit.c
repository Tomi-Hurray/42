/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_udigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:24:38 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/21 19:29:23 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_udigit(long n, int base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < 0)
		return (printf_udigit(-n, base) + 1);
	else if (n < base)
		return (printf_char(symbols[n]));
	else
	{
		count = printf_udigit(n / base, base);
		return (count + printf_udigit(n % base, base));
	}
	return (count);
}
