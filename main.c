#include "push_swap.h"

int main(int argc, char *argv[])
{
	stack *a;
	stack *b;
	
	a = initialize_stack();
	b = initialize_stack();
	if (argc < 2)
		exit(1);
	if (check_all_digit(argv) != 1)
		error_exit();
	for (int i = 1; i < argc; i++)
	{
		initial_stack_elem(a, ft_atoi(argv[i]));
	}
	if (check_repeat(a) != 1 || check_sorted(a) == 1)
	{
		error_exit();
	}
	assign_index(a);

	printf("This is stack a BEGIN:\n");
	display_stack(a);
	display_stack(b);

	node	*temp = a->top;
	for (int i = 0; i < a->size; i++)
	{
		printf("initialized indexis = %d\n", temp->order);
		temp = temp->next;
	}

	printf("LARGE_SORT:::\n");

	large_sort(a, b);

	display_stack(a);
	display_stack(b);
	

	free_stack(a);
	free_stack(b);
//	system("leaks another");
}


