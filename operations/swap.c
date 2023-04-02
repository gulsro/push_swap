#include "../push_swap.h"

void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	sa(stack *a)
{
	_swap(a, "sa");
}

void	sb(stack *b)
{
	_swap(b, "sb");
}

void	_swap(stack *s, const char *msg)
{
	if (s->size > 0)
	{
		swap(&s->top->data, &s->top->next->data);
		printf("%s\n", msg);
	}
}
