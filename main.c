#include "push_swap.h"

int main()
{
	stack *a;
	stack *b;
	
	a = initializeStack();
	b = initializeStack();
	
	push(a, 1);
	push(a, 2);
	push(a, 3);

	push(b, 10);
	push(b, 11);
	push(b, 12);

	printf("a->> %d %d %d\n",a->top->data, a->top->next->data, a->top->next->next->data);

	printf("b->> %d %d %d\n",b->top->data, b->top->next->data, b->top->next->next->data);

	sa(a);
	sb(b);
	
	printf("After swapping first elements:\n");
	
	printf("a->> %d %d %d\n",a->top->data, a->top->next->data, a->top->next->next->data);

	printf("b->> %d %d %d\n",b->top->data, b->top->next->data, b->top->next->next->data);
}
