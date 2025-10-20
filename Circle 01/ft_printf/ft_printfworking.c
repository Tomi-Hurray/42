/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfworking.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:04:01 by tomi              #+#    #+#             */
/*   Updated: 2025/10/20 23:13:42 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int ft_printf(const char *p, ...)
{
    size_t  i;
    const char    *placeholders;
    
    placeholders = p;
    i = 0;
    va_list argus;
    va_start(argus, p);
    ft_parsing(&placeholders,argus);
    va_end(argus);
    return (0);
}

int main(void)
{
    ft_printf("siema");
    //printf("%s", "hello!");
    return (0);
}