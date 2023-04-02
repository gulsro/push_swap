#include "push_swap.h"

node	*create_node(int value)
{
	node	*newNode;

	newNode = (node *)malloc(sizeof(node));
	if (!newNode)
		return NULL;
	newNode->data = value;
	newNode->next = NULL;
	return (newNode);
}

stack	*initialize_stack()
{
	stack *aStack;

	aStack = (stack *)malloc(sizeof(stack));
	aStack->size = 0;
	aStack->top = NULL;
	aStack->end = NULL;
	return (aStack);
}

void	free_stack(stack *aStack)
{
	node	*temp;
	node	*next_temp;

	temp = aStack->top;
	while (temp)
	{
		next_temp = temp->next;
		free(temp);
		temp = next_temp;
	}
	free(aStack);
}

void	assign_index(stack *aStack)
{
        node	*temp;
        int		i;

	i = 0;
	temp = aStack->top;
	while (temp)
	{
		temp->index = i;
		temp = temp->next;
		i++;
	}
}

void	initial_stack_elem(stack *aStack, int value)
{
	node	*newNode;

	newNode = create_node(value);
	if (!newNode)
		return ;
	if (aStack->top == NULL)
	{
		aStack->top = newNode;
		aStack->end = newNode;
	}
	else
	{
		last_node(aStack)->next = newNode;
		aStack->end = newNode;
	}
	aStack->size++;
}
