/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:56:44 by tomi              #+#    #+#             */
/*   Updated: 2025/10/21 18:16:22 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *p, ...);

int		printf_char(int c);
int		printf_digit(long n, int base);
int		printf_digitup(long n, int base);
int		printf_str(char *str);
int		print_format(char spec, va_list argus);
int		printf_udigit(long n, int base);
int		printf_void(void *ptr, int base);

#endif // printf_h