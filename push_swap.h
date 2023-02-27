#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
}node;

typedef struct Stack
{
	int size;
	node *top;
	node *end;
}stack;

int	checkElemsRepeat(stack *aStack);
void	displayStack(stack *aStack);
void	displayStackFromEnd(stack *aStack);
node	*lastNode(stack *aStack);
void	doublyMaker(stack *aStack);
node		*biggestNum(stack *aStack);

stack	*initializeStack();
node	*createNode(int value);
int	stackSize(stack *aStack);
node	*pop(stack *aStack);
void	freeStack(stack *aStack);
void	 push(stack *aStack, int value);

void	swap(int *x, int *y);
void	sa(stack *a);
void	sb(stack *b);
void	ss(stack *a, stack *b);
void	_swap(stack *s, const char *msg);

void	pa(stack *a, stack *b);
void	pb(stack *a, stack *b);
void	_pop_push(stack *from, stack *to, const char* msg);

void	ra(stack *a);
void	rb(stack *b);
void	_rotate(stack *s);
void	rr(stack *a, stack *b);

void	rra(stack *a);
void	rrb(stack *b);
void	_reverse_rotate(stack *s);
void	rrr(stack *a, stack *b);

stack	*stackSort(stack *a);

//node	*sortedInsert(stack *a, node *sorted, node *curr);
//void	insertionSort(stack *a);

node	*sortedInsertO(stack *a, stack *b, node *curr);
void	insertionSortO(stack *a, stack *b);

void	swap_int(int x, int y);
node	*lastNode(stack *s);
node	*partition(stack *s, node *start, node *end);
void	quickSort(stack *s, node *start, node *end);

#endif
