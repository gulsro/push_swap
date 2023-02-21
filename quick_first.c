#include "push_swap.h"


void swap_int(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

node *lastNode(stack *s)
{
	node	*temp;
	/*
	temp = createNode(0);
	if (!temp)
		return NULL;
	*/
	temp = s->top;
	while (temp && temp->next)
	{
		temp = temp->next;
	}

	return temp;
}

node *partition(stack *s, node *start, node *end)
{
	int temp;
	int	pivot;
	node	*i;
	node	*j;
	
	end = lastNode(s);
	pivot  = end->data;
	start = s->top;
	i = createNode(0);
	if (!i)
		return NULL;
	j = start;
	i->next = j;
	while (j && j->next != end)
	{
		if (j->data <= pivot)
		{
			i = i->next;
			swap_int(j->data, i->data);
		}
		j = j->next;
	}
	swap_int(i->next->data, end->data);
	return i; //in quick sort i ll make it i->next (i + 1)
}

void quickSort(stack *s, node *start, node *end)
{
	node *div;

	if (start  end)
	{
		div = partition(s, start, end);
		quickSort(s, start, div);
		quickSort(s, div->next->next, end);
	}
}

