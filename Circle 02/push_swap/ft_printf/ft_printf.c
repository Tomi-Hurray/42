/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 01:01:10 by tomi              #+#    #+#             */
/*   Updated: 2025/10/21 19:20:52 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	argus;

	va_start(argus, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += print_format(*(++format), argus);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(argus);
	return (count);
}

//int	main(void)
//{
//	int		a;
//	void	*ptr;
//	a =42;
//	ptr = NULL;
//	printf("printf: %p\n", ptr);
//	ft_printf("my ft_printf: %p", ptr);
//	return (0);
//}