#include "push_swap.h"

node	*create_node(int value)
{
	node	*new_node;

	new_node = (node *)malloc(sizeof(node));
	if (!new_node)
		return (NULL);
	new_node->data = value;
	new_node->next = NULL;
	return (new_node);
}

stack	*initialize_stack(void)
{
	stack	*my_stack;

	my_stack = (stack *)malloc(sizeof(stack));
	if (!my_stack)
		return (NULL);
	my_stack->size = 0;
	my_stack->top = NULL;
	my_stack->end = NULL;
	return (my_stack);
}

void	free_stack(stack *my_stack)
{
	node	*temp;
	node	*next_temp;

	temp = my_stack->top;
	while (temp)
	{
		next_temp = temp->next;
		free(temp);
		temp = next_temp;
	}
	free(my_stack);
}

void	assign_index(stack *my_stack)
{
	node	*temp;
	int		i;

	i = 0;
	temp = my_stack->top;
	while (temp)
	{
		temp->index = i;
		temp = temp->next;
		i++;
	}
}

void	initial_stack_elem(stack *my_stack, int value)
{
	node	*new_node;

	new_node = create_node(value);
	if (!new_node)
		return ;
	if (my_stack->top == NULL)
	{
		my_stack->top = new_node;
		my_stack->end = new_node;
	}
	else
	{
		last_node(my_stack)->next = new_node;
		my_stack->end = new_node;
	}
	my_stack->size++;
}
