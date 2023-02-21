#include "push_swap.h"

int main(int argc, char *argv[])
{
	stack *a;
//	stack *b;
	
	a = initializeStack();
//	b = initializeStack();
/*
	push(a, atoi(argv[]));
	push(a, 2);
	push(a, 9);
	push(a, 30);
*/
	for (int i = 1; i < argc; i++)
	{
		push(a, atoi(argv[i]));
	}

	if (checkElemsRepeat(a))
	{
		displayStack(a);
		stackSort(a);
	}
	else
	{
		exit(1);
	}

	printf("After editing the stack:\n");

	displayStack(a);
//	displayStack(b);

	freeStack(a);
//	freeStack(b);
//	system("leaks another");
}


