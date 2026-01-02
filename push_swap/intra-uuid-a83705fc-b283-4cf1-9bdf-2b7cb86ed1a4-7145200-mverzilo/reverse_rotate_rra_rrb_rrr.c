/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_rra_rrb_rrr.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:15:59 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/01 18:03:17 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	last = *stack;
	second_last = NULL;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack **a)
{
	ft_rrotate(a);
	printf("%s", "rra\n");
}

void	rrb(t_stack **b)
{
	ft_rrotate(b);
	printf("%s", "rrb");
}

void	rrr(t_stack **a, t_stack **b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	printf("%s0", "rrr\n");
}
