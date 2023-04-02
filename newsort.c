#include "push_swap.h"

void	sort_2(stack *a)
{
	if (a->top->data > a->top->next->data)
		_swap(a, "sa");
}

void	sort_3(stack *a)
{
	int	big;

	big = biggest_num(a);
	if (a->top->data == big)
	{
		ra(a);
	}
	else if (a->top->next->data == big)
	{
		rra(a);
	}
	if (a->top->data > a->top->next->data)
		_swap(a, "sa");
}

void	sort_4(stack *a, stack *b, int big_a)
{
	//int	big;

//	big = biggest_num(a);
	if (a->top->data == big_a)
	{
		_pop_push(a, b, "pb");
	}
	else if (last_node(a)->data == big_a)
	{
		rra(a);
		_pop_push(a, b, "pb");
	}
	else if (a->top->next->data == big_a)
	{
		_swap(a, "sa");
		_pop_push(a, b, "pb");
	}
	else if (a->top->next->next->data == big_a)
	{
		rra(a);
		rra(a);
		_pop_push(a, b, "pb");
	}
	sort_3(a);
	_pop_push(b, a, "pa");
	ra(a);
}

void	sort_5(stack *a, stack *b, int big_a, int small_a)
{
	while (big_a == biggest_num(a) || small_a == smallest_num(a))
	{
		if (a->top->data == big_a || a->top->data == small_a)
			_pop_push(a, b, "pb");
		else if (last_node(a)->data == big_a || last_node(a)->data == small_a)
		{
			rra(a);
			_pop_push(a, b, "pb");
		}
		else if (a->top->next->data == big_a || a->top->next->data == small_a)
		{
			_swap(a, "sa");
			_pop_push(a, b, "pb");
		}
		else if (a->top->next->next->data == big_a ||
			a->top->next->next->data == small_a)
		{
			ra(a);
			ra(a);
			_pop_push(a, b, "pb");
		}
	}
	sort_3(a);
	_pop_push(b, a, "pa");
	if (a->top->data == big_a)
		ra(a);
	_pop_push(b, a, "pa");
	if (a->top->data == big_a)
		ra(a);
}
