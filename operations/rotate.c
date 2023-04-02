#include "../push_swap.h"

void	ra(stack *a)
{
	_rotate(a);
	printf("ra\n");
}

void	rb(stack *b)
{
	_rotate(b);
	printf("rb\n");
}

void	_rotate(stack *s)
{
	node	*temp;

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
