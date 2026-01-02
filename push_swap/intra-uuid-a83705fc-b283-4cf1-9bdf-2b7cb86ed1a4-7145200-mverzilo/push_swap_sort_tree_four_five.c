/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort_tree_five.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 15:01:51 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/02 16:14:43 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	therd;

	if (!a || !(*a)->next || !(*a)->next->next || !(*a)->next->next->next)
		return ;
	first = (*a)->value;
	second = (*a)->next->value;
	therd = (*a)->next->next->value;
	if (first > second && second < therd && first < therd)
		sa(a);
	else if (first > second && second > therd && first > therd)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < therd && first > therd)
		ra(a);
	else if (first < second && second > therd && first < therd)
	{
		sa(a);
		ra(a);
	}
	else if (first < second && second > therd && first > therd)
		rra(a);
}

int	find_min_position(t_stack *stack)
{
	int	min_value;
	int	min_pos;
	int	current_pos;

	if (!stack)
		return (-1);
	min_value = stack->value;
	min_pos = 0;
	current_pos = 0;
	while (stack)
	{
		if (stack->value < min_value)
		{
			min_value = stack->value;
			min_pos = current_pos;
		}
		stack = stack->next;
		current_pos++;
	}
	return (min_pos);
}

void	move_min_to_top(t_stack **stack)
{
	int	min_pos;
	int	size;

	min_pos = find_min_position(*stack);
	size = get_stack_size(*stack);
	if (min_pos < size / 2)
	{
		while (min_pos > 0)
		{
			ra(stack);
			min_pos--;
		}
	}
	else
	{
		while (min_pos < size)
		{
			rra(stack);
			min_pos++;
		}
	}
}
void	sort_four(t_stack **a, t_stack **b)
{
	move_min_to_top(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	move_min_to_top(a);
	pb(a, b);
	sort_four(a, b);
}
