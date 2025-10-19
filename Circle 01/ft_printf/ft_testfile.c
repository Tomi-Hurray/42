/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:01:28 by tomi              #+#    #+#             */
/*   Updated: 2025/10/18 01:55:56 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int max(int num_args, ...);

int main(void)
{
    max(4, 10 ,12 ,14, 16);
    
    return (0);
}

int max(int num_args, ...)
{
    int i;
    i = 0;
    
    va_list args;
    va_start(args, num_args);
    
    while (i < num_args)
    {
        int x = va_arg(args, int);
        printf("x: %d\n", x);
        i++;
    }
    va_end(args);
    return (0);
}