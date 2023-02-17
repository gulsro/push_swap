#include "push_swap.h"

node	*sortedInsert(stack *aStack, node *sorted, node *curr)
{
	node	*temp;

	if (sorted == NULL || sorted->data >= curr->data)
	{
		curr->next = sorted;
		return (curr);
	}
	else
	{
		temp = sorted;
		while (temp->next && temp->next->data < curr->data)
		{
			temp = temp->next;
		}
		curr->next = temp->next;
		temp->next = curr;
	}
	return (sorted);
}

void	insertionSort(stack *aStack)
{
	node	*curr;
	node	*curr_next;
	node	*sorted;

	curr = aStack->top;
	sorted = NULL;
	while (curr)
	{
		curr_next = curr->next;
		sorted = sortedInsert(aStack, sorted, curr);
		curr = curr_next;
	}
	aStack->top = sorted;
}

