/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   large_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 21:34:58 by gozturk       #+#    #+#                 */
/*   Updated: 2023/03/30 12:05:19 by gozturk       ########   odam.nl         */
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

void	sort_as_index(stack *aStack)
{
	node	*temp;
	node	*runner;
	int		assigned_i;

	temp = aStack->top;
	while (temp)
	{
		runner = aStack->top;
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

void	large_sort(stack *a, stack *b)
{
	int	i;
	int	size_a;
	int	shift;
	int	max_shift;
	int count = 0;

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
			{
				ra(a);
				count++;
			}	
			else
			{
				_pop_push(a, b, "pb");
				count++;
			}
			i++;
		}
		while (b->size > 0)
		{
			_pop_push(b, a, "pa");
			count++;
		}
		shift++;
	}
	printf("count: %d\n", count);
}
