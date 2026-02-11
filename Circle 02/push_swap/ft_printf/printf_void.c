/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_void.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:30:13 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/22 00:49:45 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_void(void *ptr, int base)
{
	int				count;
	unsigned long	uptr;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	uptr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	if (uptr >= ULONG_MAX)
		count += printf_udigit_pointer(ULONG_MAX, base);
	else
		count += printf_udigit_pointer(uptr, base);
	return (count);
}
