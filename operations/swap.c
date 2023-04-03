/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:10:36 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 12:57:55 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	sa(t_stack *a)
{
	_swap(a, "sa");
}

void	sb(t_stack *b)
{
	_swap(b, "sb");
}

void	_swap(t_stack *s, const char *msg)
{
	if (s->size > 0)
	{
		swap(&s->top->data, &s->top->next->data);
		ft_printf("%s\n", msg);
	}
}
