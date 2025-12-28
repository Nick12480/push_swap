/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_parsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:37:56 by mverzilo          #+#    #+#             */
/*   Updated: 2025/12/28 12:25:06 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse_argument(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;

	stack_a = NULL;
	i = 1;
	while (i < argc)
	{
		if (!process_argument(argv[i], &stack_a))
		{
			free_stack(stack_a);
			print_error();
			return (NULL);
		}
		i++;
	}
	return (stack_a);

}

int	process_argument(char *arg, t_stack **stack)
{
	char	**temp;
	int		result;

	temp = ft_split(arg, ' ');
	if (!temp)
		return (0);
	result = process_numbers(temp, stack);
	free_split(temp);
	return (result);
}

int	process_numbers(char **numbers, t_stack **stack)
{
	int	j;

	j = 0;
	while (numbers[j])
	{
		if (!validate_and_add(numbers[j], stack))
			return (0);
		j++;
	}
	return (1);
}

int	validate_and_add(char *str, t_stack **stack)
{
	long	num;

	if (!is_valid_number(str))
		return (0);
	num = ft_atoi(str);
	if (num < INT_MIN || num > INT_MAX)
		return (0);
	add_to_stack(stack, (int)num);
	return (1);
}

void	addto_stack(t_stack **stack, int value)
{
	t_stack	*new;
	t_stack	*tmp;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (0);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
