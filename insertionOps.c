#include "push_swap.h"

node *sortedInsert(stack *a, stack *b, node *curr)
{
	node	*temp;

	if (!isEmpty(b) || b->top->data >= curr->data)
	{
		_pop_push(a, b, "pb");
		curr = b->top;
		return curr;
	}
	else
	{
		temp = b->top;
		while (temp->next && temp->next->data < curr->data)
		{
			temp = temp->next;
		}
		_pop_push(b, a, "pa");
		_swap(a, "sa");
		_pop_push(a, b, "pb");
		_pop_push(a, b, "pb");
	}
	return (b->top);
}

void insertionSort(stack *a, stack *b)
{
	node	*curr;
	node	*curr_next;

	curr = a->top;
	b->top = NULL;
	while (curr)
	{
		curr_next = curr->next;
		b->top = sortedInsert(a, b, curr);
		curr = curr_next;
	}
	a->top = b->top;
}
