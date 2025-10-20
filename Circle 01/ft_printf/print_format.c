/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:34:24 by tomi              #+#    #+#             */
/*   Updated: 2025/10/21 00:30:43 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_format(char spec, va_list argus)
{
    int count;

    count = 0;
    if (spec == 'c')
        count += printf_char(va_arg(argus, int));
    else if (spec == 's')
        count += printf_str(va_arg(argus, char *));
    else if (spec == 'd')
        count += printf_digit(va_arg(argus, int), 10);
    else if (spec == 'x')
        count += printf_digit(va_arg(argus, unsigned int), 16);
    else if (spec == 'X')
        count += printf_digitup(va_arg(argus, unsigned int), 16);
    else if (spec == 'i')
        count += printf_int(va_arg(argus, unsigned int), 10);
    else if (spec == 'u')
        count += printf_udigit(va_arg(argus, unsigned int), 10);
    else if (spec == '%')
        count += printf_char(va_arg(argus, int));
    else if (spec == 'p')
        count += printf_void(va_arg(argus, unsigned int), 10);
    else
        count += write(1, &spec, 1);
    return (count);
}
