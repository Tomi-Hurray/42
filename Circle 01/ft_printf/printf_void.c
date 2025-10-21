/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_void.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:30:13 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/21 19:37:19 by tkorytko         ###   ########.fr       */
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
	count += printf_digit(uptr, base);
	return (count);
}
