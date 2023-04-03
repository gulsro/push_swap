/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pop_up.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:10:08 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 12:57:24 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack *my_stack, t_node *nood)
{
	if (my_stack->top == NULL)
	{
		my_stack->top = nood;
		my_stack->end = nood;
	}
	else
	{
		nood->next = my_stack->top;
		my_stack->top = nood;
		my_stack->end = nood;
	}
	my_stack->size++;
}

void	pa(t_stack *a, t_stack *b)
{
	_pop_push(a, b, "pa");
}

void	pb(t_stack *a, t_stack *b)
{
	_pop_push(b, a, "pb");
}

void	_pop_push(t_stack *from, t_stack *to, const char *msg)
{
	t_node	*temp;

	temp = create_node(from->top->data);
	if (!temp)
		return ;
	if (from->size > 0)
	{
		push(to, temp);
		ft_printf("%s\n", msg);
	}
	from->top = from->top->next;
	from->size--;
}
