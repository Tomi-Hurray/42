/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:01:10 by tomi              #+#    #+#             */
/*   Updated: 2025/10/18 01:56:30 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int ft_printf(const char *p, ...)
{
    size_t i;

    i = 0;
    size_t num_args = ft_strlen(p);
    
    va_list argus;
    va_start(argus, p);
    
    while (i < num_args)
    {
        if (p[i] == 'd')
        {
            int x = va_arg(argus, int);
            printf("%d\n", x);
        }
        else if (p[i] == 'f')
        {
            double x = va_arg(argus, double);
            printf("%f\n", x);
        }
        i++;
    }
    va_end(argus);

    return (0);
}

int main(void)
{
    ft_printf("fdfd", 3.5, 5, 4.23, 100);
    printf("%f%d%f%d", 3.5, 5, 4.23, 100);
    return (0);
}