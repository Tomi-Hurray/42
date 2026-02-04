/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkorytko <tkorytko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:04:15 by tkorytko          #+#    #+#             */
/*   Updated: 2026/02/04 16:59:23 by tkorytko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_stack_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return (0);
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i < median)
			stack->ab_median = true;
		else
			stack->ab_median = false;
		stack = stack->next;
		i++;
	}
}

static void	set_a(t_stack_node *a, t_stack_node *b)
{
	t_stack_node	*current_b;
	t_stack_node	*target_node;
	long			match_index;

	while (a)
	{
		match_index = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->number < a->number
				&& current_b->number > match_index)
			{
				match_index = current_b->number;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (match_index == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	cost(t_stack_node *a, t_stack_node *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);

	while (a)
	{
		a->pushcost = a->index;
		if (!a->ab_median)
			a->pushcost = len_a - (a->index);
	}
}

