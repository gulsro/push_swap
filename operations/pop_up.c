#include "../push_swap.h"

void	push(stack *aStack, node *nood)
{
	if (aStack->top == NULL)
	{
		aStack->top = nood;
		aStack->end = nood;
	}
	else
	{
		nood->next = aStack->top;
		aStack->top = nood;
		aStack->end = nood;
	}
	aStack->size++;
}

void	pa(stack *a, stack *b)
{
	_pop_push(a, b, "pa");
}

void	pb(stack *a, stack *b)
{
	_pop_push(b, a, "pb");
}

void	_pop_push(stack *from, stack *to, const char *msg)
{
	node	*temp;

	temp = create_node(from->top->data);
	if (!temp)
		return ;
	if (from->size > 0)
	{
		push(to, temp);
		ft_printf("%s\n", msg);
	}
	from->top = from->top->next;
	from->size--;
}
