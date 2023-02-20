#include "push_swap.h"

int main()
{
	stack *a;
	stack *b;
	
	a = initializeStack();
//	b = initializeStack();

	push(a, 3);
	push(a, 2);
	push(a, 9);
	push(a, 30);

	if (checkElemsRepeat(a))
	{
		displayStack(a);
		insertionSort(a);
	}
	else
	{
		exit(1);
	}

	printf("After editing the stack:\n");

	displayStack(a);
	displayStack(b);

	freeStack(a);
//	freeStack(b);
//	system("leaks another");
}


