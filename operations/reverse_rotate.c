#include "../push_swap.h"

void	rra(stack *a)
{
	_reverse_rotate(a);
	printf("rra\n");
}

void	rrb(stack *b)
{
	_reverse_rotate(b);
	printf("rrb\n");
}

void	_reverse_rotate(stack *s)
{
	node	*temp;
	node	*second_before_end;

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
