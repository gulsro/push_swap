#include "push_swap.h"
/*
void	pa(stack *a, stack *b)
{
	node *temp;

	if (b->size > 0)
	{
		temp = pop(b);
		push(a, temp->data);
		printf("pa\n");
		free(temp);		
	}
}

void	pb(stack *a, stack *b)
{
	node *temp;

	if (a->size > 0)
	{
		temp = pop(a);
		push(b, temp->data);
		printf("pb\n");
		free(temp);
	}
}
*/
void pa(stack *a, stack *b)
{
    _pop_push(a, b, "pa");
}
void pb(stack *a, stack *b)
{
    _pop_push(b, a, "pb");
}
void    _pop_push(stack *from, stack *to, const char* msg)
{
        node *temp;

        if (from->size > 0)
        {
                temp = pop(from);
                push(to, temp->data);
                printf("%s\n", msg);
                free(temp);
        }
}
