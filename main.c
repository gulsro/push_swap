/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:12:19 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 14:46:38 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	decide_sorting(t_stack *a, t_stack *b, int argc_number)
{
	if (argc_number == 2)
		sort_2(a);
	else if (argc_number == 3)
		sort_3(a);
	else if (argc_number == 4)
		sort_4(a, b, biggest_num(a));
	else if (argc_number == 5)
		sort_5(a, b, biggest_num(a), smallest_num(a));
	else
		large_sort(a, b);
}

static	void	check_repeat_sorted(t_stack *a)
{
	t_node	*temp;

	if (check_repeat(a) != 1)
		error_exit();
	if (check_sorted(a) == 1)
		exit(1);
	temp = a->top;
	while (temp)
	{
		if (temp->data > 2147483647 || temp->data < -2147483648)
			error_exit();
		temp = temp->next;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (argc < 2)
		exit(1);
	a = initialize_stack();
	b = initialize_stack();
	if (!a || !b)
		error_exit();
	if (check_all_digit(argv) != 1)
		error_exit();
	i = 0;
	while (++i < argc)
		initial_stack_elem(a, ft_atoi(argv[i]));
	check_repeat_sorted(a);
	assign_index(a);
	decide_sorting(a, b, argc - 1);
	free_stack(a);
	free(b);
}
