/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:56:10 by tomi              #+#    #+#             */
/*   Updated: 2025/10/20 23:16:22 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_parsing(const char **format, va_list argus)
{
	char	*str;
	int		i;

	i = 0;
	 while ((* format)[i] != '\0')
    {
		if ((* format)[i] == '%')
		{
			if ((* format)[i + 1] == 's')
			{
				str = va_arg(argus, char *);
				ft_putstr_fd(str, 1);
				i+=2;;
			}
		}
		else
		{
			ft_putchar_fd((*format)[i], 1);
			i++;
		}
    }
}
