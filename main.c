#include "push_swap.h"

int main()
{
	stack *a;
	stack *b;
	
	a = initializeStack();
//	b = initializeStack();

	push(a, 11);
	push(a, 2);
	push(a, 3);
	push(a, 99);

/*
	push(b, 100);
	push(b, 101);
	push(b, 132);
*/
	displayStack(a);
//        displayStack(b);

	b = insertionSort(a);
	
	printf("After editing the stack:\n");

	doublyMaker(b);


//	displayStack(b);
	displayStackFromEnd(b);
	
	freeStack(a);
//	freeStack(b);
//	system("leaks another");
}


