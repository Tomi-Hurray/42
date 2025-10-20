/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_digit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 00:19:47 by tomi              #+#    #+#             */
/*   Updated: 2025/10/21 00:30:01 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf_digit(long n, int base)
{   
    int     count;
    char    *symbols;
    
    symbols = "0123456789abcdef";
    if (n < 0)
    {
        write(1, '-', 1);
        printf_digit(-n, base);
    }
    else if (n < base)
        return (print_char(symbols[n]));
    else
    {
        count = printf_digit(n / base, base);
        return (count + printf_digit(n % base, base));
    }
    return (count); 
}
