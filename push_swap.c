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

	newNode = (node *)malloc(sizeof(node));
	if (!newNode)
		return NULL;
	newNode->data = value;
	newNode->next = NULL;
	return (newNode);
}

stack *initializeStack()
{
	stack *aStack;
	
	aStack = (stack *)malloc(sizeof(stack));
	aStack->size = 0;
	aStack->top = NULL;
	return (aStack);
}

void freeStack(stack *aStack)
{
	node *temp;
	node *next_temp;

	temp = aStack->top;
	while (temp)
	{
		next_temp = temp->next;
		free(temp);
		temp = next_temp;
	}
	free(aStack);
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
	}
	else 
	{
		newNode->next = aStack->top; 
		aStack->top = newNode;
	}
	aStack->size++;
}

node *pop(stack *aStack)
{
	node *temp;
	if (aStack->size == 0)
	{
		return NULL;
	}
	temp = aStack->top;
	if (aStack->size == 1)
	{
		aStack->top = NULL;
	}
	else
	{
		aStack->top = aStack->top->next;
	}
	aStack->size--;
	return (temp);
}
