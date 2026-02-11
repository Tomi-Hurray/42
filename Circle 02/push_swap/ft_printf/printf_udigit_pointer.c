/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_udigit_pointer.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 00:27:07 by tomi              #+#    #+#             */
/*   Updated: 2025/10/22 00:50:28 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_udigit_pointer(unsigned long n, unsigned long base)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789abcdef";
	if (n < base)
		return (printf_char(symbols[n]));
	else
	{
		count = printf_udigit_pointer(n / base, base);
		return (count + printf_udigit_pointer(n % base, base));
	}
	return (count);
}
