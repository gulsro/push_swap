#include "push_swap.h"

void	sortSort(stack *a, stack *b)
{
	node *pivot;
	
	pivot = a->end;

	while (pivot->data > a->top->data)
	{
		_pop_push(a, b, "pa");
		while (b->size > 1)
		{
			if (b->top->data < b->top->next->data || )
			{
				
			}
		}
	}
}
