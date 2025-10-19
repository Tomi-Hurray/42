/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomi <tomi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 00:56:44 by tomi              #+#    #+#             */
/*   Updated: 2025/10/18 01:58:26 by tomi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIBFT_H
# define FTLIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int     ft_printf(const char *p, ...);

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif // ftlibft_h