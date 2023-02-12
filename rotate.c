#include "push_swap.h"

void	ra(stack *a)
{
	_rotate(a, "ra");
}

void	rb(stack *b)
{
	_rotate(b, "rb");
}

void	_rotate(stack *s, const char *msg)
{
	node *temp;
	node *next_temp;

	temp = s->top;
	while (temp)
	{
		next_temp = temp->next;
		swap(&temp->data, &next_temp->data);
		temp = temp->next;
	}
}

1 2 3 4
2 3 4 1
3 4 1 2
2 3 4 1

1 = temp
2 = next_temp
