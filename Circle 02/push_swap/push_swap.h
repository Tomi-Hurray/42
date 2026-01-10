/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:00:50 by tkorytko          #+#    #+#             */
/*   Updated: 2026/01/10 17:17:16 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_struct_node
{
	int						number;
	int						index;
	int						pushcost;
	bool					ab_median;
	bool					cheapest;
	struct s_struct_node	*target_node;
	struct s_struct_node	*next;
	struct s_struct_node	*prev;
}	t_struct_node;

// duzo funkcji.
int		*input(int argc, char *argv[]);

long	ft_atoi(const char *nptr);


#endif // push_swap_h