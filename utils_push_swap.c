/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils_push_swap.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:11:05 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 14:46:00 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stack(t_stack *my_stack)
{
	t_node	*temp;

	temp = my_stack->top;
	if (my_stack->size > 0)
	{
		ft_printf("The t_stack:\n");
		while (temp)
		{
			ft_printf("%d\n", temp->data);
			temp = temp->next;
		}
	}
	else
		ft_printf("The t_stack is empty.\n");
}

t_node	*last_node(t_stack *my_stack)
{
	t_node	*temp;

	if (!my_stack->size)
		error_exit();
	temp = my_stack->top;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

int	biggest_num(t_stack *my_stack)
{
	int		big;
	t_node	*temp;

	if (!my_stack->size)
		error_exit();
	temp = my_stack->top;
	big = temp->data;
	while (temp->next)
	{
		if (temp->next->data > big)
		{
			big = temp->next->data;
		}
		temp = temp->next;
	}
	return (big);
}

int	smallest_num(t_stack *my_stack)
{
	int		small;
	t_node	*temp;

	if (!my_stack->size)
		error_exit();
	temp = my_stack->top;
	small = temp->data;
	while (temp->next)
	{
		if (temp->next->data < small)
		{
			small = temp->next->data;
		}
		temp = temp->next;
	}
	return (small);
}
