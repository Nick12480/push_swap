/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mverzilo <mverzilo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 21:05:04 by jbuchins          #+#    #+#             */
/*   Updated: 2026/01/01 18:34:00 by mverzilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "adapter.h"
#include <stdlib.h>

static t_nodes	*A;
static t_nodes	*B;
static t_nodes ** listid;
static int order_a[128];
static int order_b[128];
void			*func[] = {&op_pa, &op_pb, &op_ra, &op_rb, &op_rr, &op_rra, &op_rrb, &op_rrr, &op_sa, &op_sb, &op_ss};
char			*ops[] = {"pa", "pb", "ra", "rb", "rr", "rra", "rrb", "rrr", "sa", "sb", "ss"};
int				cases[] = {30, 20, 10, 32, 41, 00}; // AB

void	run_op(void *f(t_nodes **, t_nodes **))
{
	f(&A,&B);
}

int get_id(t_nodes * node)
{
	int i = 0;
	while(listid[i] != node)
		i++;
	return i+1;
}

void	print_list(t_nodes * head)
{
	t_nodes *temp;
	temp = head;
	while (temp)
	{
		printf("%d -> ", get_id(temp));
		temp = USER_NEXT(temp);
	}
	printf("∅");
	printf ("\n");
}

void	lstback(t_nodes **list, t_nodes *new)
{
	t_nodes	*temp;

	if (*list != NULL)
	{
		temp = *list;
		while (nextof(temp) != NULL)
		{
			temp = nextof(temp);
		}
		nextof(temp) = new;
	}
	else
	{
		*list = new;
	}
}

t_nodes * make_list(int len, t_nodes ** idlist)
{
	t_nodes *new;
	t_nodes *head;
	int		i;

	head = NULL;
	i = 0;
	while (i < len)
	{
		new = malloc(sizeof(t_nodes));
		idlist[i] = new;
		lstback(&head, new);
		i++;
	}
	return (head);
}

int	main(int argc, char **argv)
{
	int	op;
	int	list_len_a;
	int	list_len_b;

	if (argc != 3)
		return (1);
	op = atoi(argv[1]);
	list_len_a = ((cases[(atoi(argv[2]))]) / 10);
	list_len_b = ((cases[(atoi(argv[2]))]) % 10);
	listid= calloc(list_len_a + list_len_b, sizeof(t_nodes*));
	A = make_list(list_len_a, listid);
	B = make_list(list_len_b, &listid[list_len_a]);
	printf("-----------------------------\nA: ");
	print_list(A);
	printf("B: ");
	print_list(B);
	run_op(func[op]);
	printf("A: ");
	print_list(A);
	printf("B: ");
	print_list(B);
	return 0;
}

