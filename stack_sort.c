#include "push_swap.h"

stack	*stackSort(stack *a)
{
	stack	*b;
	node	*temp;

	b = initializeStack();
	if (!b)
		return NULL;;
	while (!isEmpty(a))
	{
		temp = pop(a);
		while (!isEmpty(b) && b->top->data > temp->data )
		{
			_pop_push(b, a, "pa");
				
		}
		push(b, temp->data);
	}
	while (!isEmpty(b))
	{
		_pop_push(b, a, "pa");
	}
	return a;
}
