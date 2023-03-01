#include "push_swap.h"
#include <unistd.h>
void	sortSort(stack *a, stack *b)
{
	node *pivot;
	
	pivot = a->end;

	while (a->size > 1)
	{
		if (pivot->data < a->top->data)
		{
                        ra(a);
                }
		else if (pivot->data > a->top->data || pivot == a->top)
		{
			if (pivot == a->top)
				pivot = a->end;
			_pop_push(a, b, "pb");
			if (b->size > 1)
			{
				if (b->top->data < b->end->data)
				{
					rb(b);
				}
				else if (b->top->data < b->top->next->data || b->top->data < biggestNum(b)->data)
                {
                    _swap(b, "sb");
                }
			}
		}
	}
	while (b->top->next)
	{
		if (b->top->data == biggestNum(b)->data)
			_pop_push(b, a, "pa");
		else if (b->top->data < b->top->next->data) // compare it with max in stack b.
		{
			_swap(b, "sb");
			_pop_push(b, a, "pa");
		}
		else if (b->top->data < biggestNum(b)->data)
		{
			rb(b);	
			_pop_push(b, a, "pa");
		}
	}
}
