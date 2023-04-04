/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_numbers.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:14:54 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/04 14:53:15 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_repeat(t_stack *my_stack)
{
	t_node	*temp;
	t_node	*next_temp;

	temp = my_stack->top;
	while (temp)
	{
		next_temp = temp->next;
		while (next_temp)
		{
			if (temp->data == next_temp->data)
			{
				return (0);
			}
			next_temp = next_temp->next;
		}
		temp = temp->next;
	}
	return (1);
}

int	check_sorted(t_stack *my_stack)
{
	t_node	*temp;

	temp = my_stack->top;
	if (my_stack->size < 2)
		return (1);
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
