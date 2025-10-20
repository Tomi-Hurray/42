/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:01:10 by tomi              #+#    #+#             */
/*   Updated: 2025/10/21 00:32:22 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
    size_t i;
    int count;
    va_list argus;
    
    va_start(argus, format);
    count = 0;
    while (*format != '\0')
    {
        if (*format == '%')
            count += print_format(*(++format), argus);
        else
            count += write(1, &format, 1);
        ++format;
    }
    va_end(argus);
    return (count);
}

int main(void)
{
    ft_printf("%d", 5);
    printf("%d", 5);
    return (0);
}