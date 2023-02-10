#include "push_swap.h"
#include <assert.h>

void test_popEmptyStack()
{
	stack *s;
	s = initializeStack();
	assert(pop(s) == NULL);
	free(s);
	printf("test_popEmptyStack OK\n");
}

void test_popFilledStack()
{
	stack *s;
	s = initializeStack();

	push(s, 3);
	push(s, 4);
	push(s, 5);
	push(s, 6);
	
	assert(s->size == 4);

	assert(pop(s)->data == 6);
	assert(pop(s)->data == 5);
	assert(pop(s)->data == 4);
	assert(pop(s)->data == 3);
	assert(pop(s) == NULL);
	free(s);
	printf("test_popFilledStack OK\n");
}


void test_pop_push_mix()
{
	stack *s;
	s = initializeStack();

	push(s, 3);
	push(s, 4);
	pop(s);
	push(s, 5);
	pop(s);
	push(s, 6);
	
	assert(pop(s)->data == 6);
	assert(pop(s)->data == 3);
	assert(pop(s) == NULL);
	free(s);
	printf("test_pop_push_mix OK\n");
}

int main()
{
	
	test_popEmptyStack();
	test_popFilledStack();
	test_pop_push_mix();

}

