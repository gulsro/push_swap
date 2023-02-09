#include "push_swap.h"

void swap(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

void sa(stack *a)
{
	node *temp;

	if (a->size > 1)
	{
		temp->data = a->top->data;
		a->top->data = a->top->next->data;
		a->top->next->data = temp->data;	
	}
}
