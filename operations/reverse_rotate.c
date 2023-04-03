/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:10:19 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 12:33:28 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *a)
{
	_reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	_reverse_rotate(b);
	ft_printf("rrb\n");
}

void	_reverse_rotate(t_stack *s)
{
	t_node	*temp;
	t_node	*second_before_end;

	temp = s->top;
	if (s->size > 1)
	{
		while (temp && temp->next)
		{
			second_before_end = temp;
			temp = temp->next;
		}
		temp->next = s->top;
		s->top = temp;
		second_before_end->next = NULL;
	}
}
