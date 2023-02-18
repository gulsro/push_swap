#include "push_swap.h"

stack *sortedInsert(stack *a, stack *b, node *curr)
{
	node	*temp;

	if (!isEmpty(b) || b->top->data >= curr->data)
	{
		_pop_push(a, b, "pb");
		return curr;
	}
	else
	{
		temp = b->top;
		while (temp->next && temp->next->data < curr->data)
		{
			temp = temp->next;
		}
		curr->next = temp->next;
		temp->next = curr;
	}
	return (b);
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
		sorted = sortedInsert(a, b, curr);
		curr = curr_next;
	}
	b->top = sorted;
	doublyMaker(b);
	curr_next = b->top;

}
