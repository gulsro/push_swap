#include "push_swap.h"
#include <unistd.h>
int sortSort(stack *a, stack *b)
{
	node *pivot;
	int count = 0;	

	pivot = a->end;

	while (a->size > 1)
	{
		if (pivot->data < a->top->data)
		{
                        ra(a);
			count++;
                }
		else if (pivot->data > a->top->data || pivot == a->top)
		{
			if (pivot == a->top)
				pivot = a->end;
			_pop_push(a, b, "pb");
			count++;
			if (b->size > 1)
			{
				if (b->top->data < b->end->data)
				{
					rb(b);
					count++;
				}
				else if (b->top->data < b->top->next->data || b->top->data < biggestNum(b)->data)
                {
                    _swap(b, "sb");
					count++;
                }
			}
		}
	}
	while(b->top->next)
	{
		if (b->top->data == biggestNum(b)->data)
		{
			_pop_push(b, a, "pa");
			count++;
		}
		else if (b->top->data < b->top->next->data) // compare it with max in stack b.
		{
			_swap(b, "sb");
			count++;
			_pop_push(b, a, "pa");
			count++;
		}
		else if (b->top->data < biggestNum(b)->data)
		{
			rb(b);
			count++;
			_pop_push(b, a, "pa");
			count++;
		}
	}
	_pop_push(b, a, "pa");
	count++;
//	printf("count = %d\n", count);
	return count;
}
