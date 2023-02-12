#include "push_swap.h"
#include <assert.h>

void test_popEmptyStack()
{
	stack *s;
	s = initializeStack();
	assert(pop(s) == NULL);
	freeStack(s);
	printf("test_popEmptyStack OK\n");
}

void test_popFilledStack()
{
	stack *s;
	node *temp;

	s = initializeStack();

	push(s, 3);
	push(s, 4);
	push(s, 5);
	push(s, 6);
	
	assert(s->size == 4);
	
	temp = pop(s);
	assert(temp->data == 6);
	free(temp);

	temp = pop(s);
	assert(temp->data == 5);
	free(temp);
	
	temp = pop(s);
	assert(temp->data == 4);
	free(temp);

	temp = pop(s);
	assert(temp->data == 3);
	free(temp);

	temp = pop(s);
	assert(temp == NULL);
	freeStack(s);
	printf("test_popFilledStack OK\n");
}


void test_pop_push_mix()
{
	stack *s;
	node *temp;

	s = initializeStack();

	push(s, 3);
	push(s, 4);
	temp = pop(s);
	free(temp);
	push(s, 5);
	temp = pop(s);
        free(temp);
	push(s, 6);
	
	temp = pop(s);
	assert(temp->data == 6);
	free(temp);

	temp = pop(s);
	assert(temp->data == 3);
	free(temp);

	temp = pop(s);
	assert(temp == NULL);
	freeStack(s);
	printf("test_pop_push_mix OK\n");
}

int main()
{
	
	test_popEmptyStack();
	test_popFilledStack();
	test_pop_push_mix();
	
}

