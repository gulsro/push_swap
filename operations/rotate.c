/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:10:28 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 12:58:03 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *a)
{
	_rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	_rotate(b);
	ft_printf("rb\n");
}

void	_rotate(t_stack *s)
{
	t_node	*temp;

	temp = s->top;
	if (s->size > 1)
	{
		while (temp && temp->next)
		{
			temp = temp->next;
		}
		temp->next = s->top;
		s->end = temp;
		s->top = s->top->next;
		temp->next->next = NULL;
	}
}
