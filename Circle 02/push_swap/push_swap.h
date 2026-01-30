/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:00:50 by tkorytko          #+#    #+#             */
/*   Updated: 2026/01/30 16:48:57 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "/nfs/homes/tkorytko/core/Circle 0/libft/libft.h"
# include "/nfs/homes/tkorytko/core/Circle 01/ft_printf/ft_printf.h"
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

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
}							t_stack_node;

// duzo funkcji.
long						ft_atol(const char *nptr);
// ERROR HANDLING
int							error_syntax(char *str_n);
int							error_dup(t_stack_node *a, int n);
void						free_stack(t_stack_node **stack);
void						free_errors(t_stack_node **a);
// STACK INIT
void						init_stack_a(t_stack_node **a, char **argv);
char						**split(char *s, char c);
// NODES INIT

// UTILS FOR STACKS
int							stack_len(t_stack_node *stack);
t_stack_node				*find_last(t_stack_node *stack);
bool						stack_sorted(t_stack_node *stack);
t_stack_node				*find_min(t_stack_node *stack);
t_stack_node				*find_max(t_stack_node *stack);
// COMMANDS
void						sa(t_stack_node **a, bool check);
void						sb(t_stack_node **b, bool check);
void						ss(t_stack_node **a, t_stack_node **b, bool check);
void						ra(t_stack_node **a, bool check);
void						rb(t_stack_node **b, bool check);
void						rr(t_stack_node **a, t_stack_node **b, bool check);
void						rra(t_stack_node **a, bool check);
void						rrb(t_stack_node **b, bool check);
void						rrr(t_stack_node **a, t_stack_node **b, bool check);
void						pa(t_stack_node **a, t_stack_node **b, bool check);
void						pb(t_stack_node **b, t_stack_node **a, bool check);
// SORTING
void						sort_small(t_stack_node **a);
void						sort_stacks(t_stack_node **a, t_stack_node **b);

#endif // push_swap_h