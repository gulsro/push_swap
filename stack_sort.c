#include "push_swap.h"

stack	*stackSort(stack *a)
{
	stack	*b;
	node	*temp;
	int count = 0;

	b = initializeStack();
	if (!b)
		return NULL;;
	while (!isEmpty(a))
	{
		temp = pop(a);
		while (!isEmpty(b) && b->top->data > temp->data )
		{
			_pop_push(b, a, "pa");
			count++;
		}
		push(b, temp->data);
	}
	while (!isEmpty(b))
	{
		_pop_push(b, a, "pa");
		count++;
	}
	printf("\nNumber of operations: %d\n", count);
	return a;
}
