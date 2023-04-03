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

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (argc < 2)
		error_exit();
	a = initialize_stack();
	b = initialize_stack();
	if (!a || !b)
		error_exit();
	if (check_all_digit(argv) != 1)
		error_exit();
	i = 1;
	while (i < argc)
	{
		initial_stack_elem(a, ft_atoi(argv[i]));
		i++;
	}
	if (check_repeat(a) != 1 || check_sorted(a) == 1)
		error_exit();
	assign_index(a);
	decide_sorting(a, b, argc - 1);
	free_stack(a);
	free(b);
}
