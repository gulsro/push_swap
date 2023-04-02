#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <assert.h>

#include "ft_printf/ft_printf.h"
# include <limits.h>

typedef struct Node
{
	int	data;
	int	order;
	int	index;
	struct	Node *next;
	struct	Node *prev;
}node;

typedef struct Stack
{
	int	size;
	node	*top;
	node	*end;
}stack;

int	check_repeat(stack *aStack);
int	check_sorted(stack *aStack);
void	error_exit();

int	ft_atoi(char *str);
int	check_all_digit(char **argv);

void	display_stack(stack *aStack);
node	*last_node(stack *aStack);
int	biggest_num(stack *aStack);
int	smallest_num(stack *aStack);

//newsort
void	sort_2(stack *a);
void	sort_3(stack *a);
void	sort_4(stack *a, stack *b, int big_a);
void	sort_5(stack *a, stack *b, int big_a, int small_a);
void	large_sort(stack *a, stack *b);
void	sort_as_index(stack *aStack);

stack	*initialize_stack();
node	*create_node(int value);
node	*pop(stack *aStack);
void	free_stack(stack *aStack);
void	initial_stack_elem(stack *aStack, int value);
void	assign_index(stack *aStack);

//operations
void		swap(int *x, int *y);
void		sa(stack *a);
void		sb(stack *b);
void	ss(stack *a, stack *b);
void	_swap(stack *s, const char *msg);

void	push(stack *aStack, node *nood);
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

void	swap_int(int x, int y);
node	*lastNode(stack *s);

#endif
