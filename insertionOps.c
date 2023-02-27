#include "push_swap.h"

node *sortedInsertO(stack *a, stack *b, node *curr)
{
	node	*temp;

	if (!stackSize(b) || b->top->data >= curr->data)
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
		_pop_push(a, b, "pb");
		if (lastNode(b) < b->top->data)
		{
			rb(b);
		}
		else
			{
				curr->next = temp->next;
				temp->next = curr;
			}	

		
	}
	return (b->top);
}

void insertionSortO(stack *a, stack *b)
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
