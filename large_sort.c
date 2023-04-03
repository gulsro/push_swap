/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   large_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 21:34:58 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 12:54:50 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	shift_number(int biggest_num)
{
	int	shift;

	shift = 0;
	while (biggest_num > 0)
	{
		biggest_num /= 2;
		shift++;
	}
	return (shift);
}

void	sort_as_index(t_stack *my_stack)
{
	t_node	*temp;
	t_node	*runner;
	int		assigned_i;

	temp = my_stack->top;
	while (temp)
	{
		runner = my_stack->top;
		assigned_i = 0;
		while (runner)
		{
			if (temp->data > runner->data)
				assigned_i++;
			runner = runner->next;
		}
		temp->index = assigned_i;
		temp = temp->next;
	}
}

void	large_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	size_a;
	int	shift;
	int	max_shift;

	max_shift = shift_number(a->size - 1);
	shift = 0;
	size_a = a->size;
	while (shift < max_shift)
	{
		sort_as_index(a);
		i = 0;
		while (i < size_a)
		{
			if (((a->top->index >> shift) & 1) == 1)
				ra(a);
			else
				_pop_push(a, b, "pb");
			i++;
		}
		while (b->size > 0)
			_pop_push(b, a, "pa");
		shift++;
	}
}
