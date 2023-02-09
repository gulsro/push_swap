#include "push_swap.h"

int isEmpty(stack *aStack)
{
	if (aStack->top == NULL)
		return 1;
	return 0;
}

node *createNode(int value)
{
	node *newNode;
	stack *a;

	a = initializeStack();
	newNode = malloc(sizeof(node));
	if (!newNode)
		return NULL;
	newNode->data = value;
	a->top = newNode;
	newNode->next = NULL;
	return (newNode);
}

stack *initializeStack()
{
	stack *aStack;
	
	aStack = malloc(sizeof(stack));
	aStack->size = 0;
	aStack->top = NULL;
	return (aStack);
}

void freeNode(node *aNode)
{
	free(aNode);
	aNode->next = NULL;
}

void freeStack(stack *aStack)
{
	node *temp;

	temp = aStack->top;
	while (temp->top)
	{
		temp = temp->next;
		freeNode(temp);
		aStack->top
	}
}

void push(stack *aStack, int value)
{
	node *newNode;

	newNode = createNode(value);
	if (!newNode)
		return ;
	newNode->data = value;
	if (aStack->top == NULL) 
	{	
		aStack->top = newNode;
		newNode->next = NULL;
		aStack->size++;
	}
	else 
	{
		newNode->next = aStack->top; 
		aStack->top = newNode;
		aStack->size++;
	}
}

node *pop(stack *aStack)
{
	node *temp;
	if (aStack->size == 0)
		return NULL;
	temp = aStack->top;
	if (aStack->size == 1)
	{
		aStack->top = NULL;
		aStack->size--;
		return (temp);
	}
	aStack->top = aStack->top->next;
	aStack->size--;
	return (temp);
}

int main(int argc, char *argv[])
{
	stack *a;

	a = initializeStack();
	if (argc == 6)
	{
		printf("The stack: ");
		for(int i = 1; i < 6; i++)
		{
			push(a, atoi(argv[i]));
		}
//		sa(a);
//		pop(a);
		printf("top %d\n", a->top->data);
		printf("2nd %d\n", a->top->next->data);
               printf("3rd  %d\n", a->top->next->next->data);
		printf("4th  %d\n", a->top->next->next->next->data);
		printf("5th  %d\n", a->top->next->next->next->next->data);
		printf("%d\n", pop(a)->data);
	}
}
