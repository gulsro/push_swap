/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:11:23 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 12:59:25 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	return (new_node);
}

t_stack	*initialize_stack(void)
{
	t_stack	*my_stack;

	my_stack = (t_stack *)malloc(sizeof(t_stack));
	if (!my_stack)
		return (NULL);
	my_stack->size = 0;
	my_stack->top = NULL;
	my_stack->end = NULL;
	return (my_stack);
}

void	free_stack(t_stack *my_stack)
{
	t_node	*temp;
	t_node	*next_temp;

	temp = my_stack->top;
	while (temp)
	{
		next_temp = temp->next;
		free(temp);
		temp = next_temp;
	}
	free(my_stack);
}

void	assign_index(t_stack *my_stack)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = my_stack->top;
	while (temp)
	{
		temp->index = i;
		temp = temp->next;
		i++;
	}
}

void	initial_stack_elem(t_stack *my_stack, int value)
{
	t_node	*new_node;

	new_node = create_node(value);
	if (!new_node)
		return ;
	if (my_stack->top == NULL)
	{
		my_stack->top = new_node;
		my_stack->end = new_node;
	}
	else
	{
		last_node(my_stack)->next = new_node;
		my_stack->end = new_node;
	}
	my_stack->size++;
}
