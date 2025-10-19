/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:56:10 by tomi              #+#    #+#             */
/*   Updated: 2025/10/19 20:05:01 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	ft_parsing(const char *p, size_t num_args)
{
	size_t	i;

	i = 0;
	while (i < num_args)
	{
		if (p[i] == 'c' && p[i + 1] == '%')
			return ('c');
		if (p[i] == 's' && p[i + 1] == '%')
			return ('s');
		if (p[i] == 'p' && p[i + 1] == '%')
			return ('p');
		if (p[i] == 'd' && p[i + 1] == '%')
			return ('d');
		if (p[i] == 'i' && p[i + 1] == '%')
			return ('i');
		if (p[i] == 'u' && p[i + 1] == '%')
			return ('u');
		if (p[i] == 'x' && p[i + 1] == '%')
			return ('x');
		if (p[i] == 'X' && p[i + 1] == '%')
			return ('X');
		if (p[i] == '%' && p[i + 1] == '%')
			return ('%');
		return ('S');
	}
}
