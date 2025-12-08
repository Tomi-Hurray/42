/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:00:32 by tkorytko          #+#    #+#             */
/*   Updated: 2025/12/08 19:47:05 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*a;
	int	*b;
	int	i;

	i = 0;
	b = malloc((argc - 1) * sizeof(int));
	a = input(argc, argv);
	while (i < argc - 1)
	{
		printf("%d%d", a[i], b[i]);
		i++;
	}
}
