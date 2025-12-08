/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 19:16:16 by tkorytko          #+#    #+#             */
/*   Updated: 2025/12/08 19:24:46 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*input(int argc, char *argv[])
{
	int	i;
	int	*a;

	i = 0;
	a = malloc((argc - 1) * sizeof(int));
	if (!a)
		return (0);
	if (argc <= 1)
		return (0);
	while (i < argc - 1)
	{
		a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < argc - 1)
		printf("%d", a[i++]);
	return (a);
}
