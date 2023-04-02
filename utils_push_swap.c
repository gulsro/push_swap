#include "push_swap.h"

void	display_stack(stack *aStack)
{
	node	*temp;

	temp = aStack->top;
	if (aStack->size > 0)
	{
		printf("The stack:\n");
		while (temp)
		{
			printf("%d\n", temp->data);
			temp = temp->next;
		}
	}
	else
		printf("The stack is empty.\n");
}

node	*last_node(stack *aStack)
{
	node	*temp;

	if (!aStack->size)
		error_exit();
	temp = aStack->top;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

int	biggest_num(stack *aStack)
{
	int		big;
	node	*temp;

	if (!aStack->size)
		error_exit();
	temp = aStack->top;
	big = temp->data;
	while (temp->next)
	{
		if (temp->next->data > big)
		{
			big = temp->next->data;
		}
		temp = temp->next;
	}
	return (big);
}

int	smallest_num(stack *aStack)
{
	int		small;
	node	*temp;

	if (!aStack->size)
		error_exit();
	temp = aStack->top;
	small = temp->data;
	while (temp->next)
	{
		if (temp->next->data < small)
		{
			small = temp->next->data;
		}
		temp = temp->next;
	}
	return (small);
}
