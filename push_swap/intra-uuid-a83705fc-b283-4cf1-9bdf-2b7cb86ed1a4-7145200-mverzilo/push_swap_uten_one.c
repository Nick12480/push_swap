/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_uten_one.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 17:24:52 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/02 16:18:20 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sortet(t_stack *stack)
{
	if (!stack || !stack->next)
		return (1);
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	get_stack_size(t_stack *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

void	index_stack(t_stack *a)
{
	t_stack	*corrent;
	t_stack	*compar;
	int		index;

	corrent = a;
	while (corrent)
	{
		index = 0;
		compar = a;
		while (compar)
		{
			if (compar->value < corrent->value)
				index++;
			compar = compar->next;
		}
		corrent->value = index;
		corrent = corrent->next;
	}
}

void	seleckt_algorithm(t_stack **a, t_stack **b)
{
	int	size;

	size = get_stack_size(*a);
	if (is_sortet(*a))
		return ;
	if (size == 3)
	{
		sort_three(a);
	}
	if (size == 4)
	{
		
	}
	
	if (size == 5)
	{
		sort_five(a, b);
	}
	// if (size > 5)
	// {
	// 	index_stack(a);
	// 	turk_sort(a, b);
	// }
}
