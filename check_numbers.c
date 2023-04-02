#include "push_swap.h"

int	check_repeat(stack *aStack)
{
	node	*temp;
	node	*next_temp;

	temp = aStack->top;
	while (temp)
	{
		next_temp = temp->next;
		while (next_temp)
		{
			if (temp->data == next_temp->data)
			{
				exit(1);
			}
			next_temp = next_temp->next;
		}
		temp = temp->next;
	}
	return (1);
}

int	check_sorted(stack *aStack)
{
	node	*temp;

	temp = aStack->top;
	if (aStack->size < 2)
		return (1);
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
