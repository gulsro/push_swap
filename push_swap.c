#include "push_swap.h"

void displayStack(stack *aStack)
{
	node *temp;

	temp = aStack->top;
	if (aStack->size > 0)
	{
		printf("The stack:\n");
		while (temp)
		{
			printf("%d\n", temp->data);
			temp = temp->next;
		}
	}
	else
		printf("The stack is empty.");
}

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
}

void freeStack(stack *aStack)
{
	node *temp;

	temp = aStack->top;
	while (temp)
	{
		temp = temp->next;
		freeNode(aStack->top);
		aStack->size--;
		aStack->top = temp;
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

