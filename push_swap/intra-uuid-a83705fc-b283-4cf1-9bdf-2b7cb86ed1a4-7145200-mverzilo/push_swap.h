/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:19:14 by mverzilo          #+#    #+#             */
/*   Updated: 2026/01/02 15:53:24 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//Pasing
t_stack	*parse_argument(int argc, char **argv);
int		process_argument(char *arg, t_stack **stack);
int		process_numbers(char **numbers, t_stack **stack);
int		validate_and_add(char *str, t_stack **stack);
void	addto_stack(t_stack **stack, int value);

//Pesing_uten
int		is_valid_number(char *str);
void	free_stack(t_stack *stack);
void	free_split(char **strs);
int		count_strings(char **strs);
void	print_error(void);

//swap_sa_sb_ss
void	ft_swap(t_stack **stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

//push_pa_pb
void	ft_push(t_stack **src, t_stack **dest);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

//rotate_ra_rb_rr
void	ft_rotete(t_stack **stack);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

//reverse_rotate_rra_rrb_rrr
void	ft_rrotate(t_stack **stack);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

//push_swap_uten_one
int		is_sortet(t_stack *stack);
int		get_stack_size(t_stack *stack);
void	index_stack(t_stack *a);
void	seleckt_algorithm(t_stack **a, t_stack **b);

//push_swap_sort_three_five_uten
void	sort_three(t_stack **a);
int		find_min_position(t_stack *stack);
void	move_min_to_top(t_stack **stack);
void	sort_five(t_stack **a, t_stack **b);

//Sorting algorithm "Turk"
// void	turk_sort(t_stack **a, t_stack **b);