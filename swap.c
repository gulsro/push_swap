#include "push_swap.h"

void	swap(int *x, int *y)
{
	int temp;
	
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

void _swap(stack *s, const char *msg)
{
	if (s->size > 0)
	{
		swap(&s->top->data, &s->top->next->data);
		printf("%s\n", msg);
	}
}

void	ss(stack *a, stack *b) //it s written seperately because i dont want to printf
{
	if (a->size > 1)
	{
		swap(&a->top->data, &a->top->next->data);
	}       
	if (b->size > 1)
	{
		swap(&b->top->data, &b->top->next->data);
	}
	printf("ss\n");
}
