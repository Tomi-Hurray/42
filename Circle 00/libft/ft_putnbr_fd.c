/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:43:34 by tkorytko          #+#    #+#             */
/*   Updated: 2025/10/11 13:53:51 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	if_less_min(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		m;
	char	c;

	i = n;
	m = 1;
	c = 0;
	if_less_min(n, fd);
	if (i < 0 && i != -2147483648)
	{
		write(fd, "-", 1);
		m = -m;
	}
	i = n * m;
	if (i < 10 && i != -2147483648)
	{
		c = i + '0';
		write(fd, &c, 1);
	}
	else if (i >= 10 && i != -2147483648)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
}
