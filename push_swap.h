#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node *next;
}node;

typedef struct Stack
{
	int size;
	node *top;
}stack;

void push(stack *aStack, int value);
stack *initializeStack();
node *createNode(int value);
int isEmpty(stack *aStack);
node *pop(stack *aStack);

void sa(stack *a);
void swap(int *x, int *y);

#endif
