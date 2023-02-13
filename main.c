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

	displayStack(a);
        displayStack(b);

	rrr(a, b);

	printf("After swapping first elements:\n");

	displayStack(a);
	displayStack(b);
	
	freeStack(a);
	freeStack(b);
	system("leaks another");
}
