/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ra_rb_rr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 14:37:59 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/01 18:03:17 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotete(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
}

void	ra(t_stack **a)
{
	ft_rotete(a);
	printf("%s", "ra\n");
}

void	rb(t_stack **b)
{
	ft_rotete(b);
	printf("%s", "rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	ft_rotete(a);
	ft_rotete(b);
	printf("%s", "rr\n");
}
