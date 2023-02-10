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
	if (a->size > 1)
		swap(&a->top->data, &a->top->next->data);
	printf("sa\n");
}


