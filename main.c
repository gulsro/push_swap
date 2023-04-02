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
		initial_stack_elem(a, ft_atoi(argv[i]));
	if (check_repeat(a) != 1 || check_sorted(a) == 1)
		error_exit();
	assign_index(a);
	if (argc == 2)
		sort_2(a);
	else if (argc == 3)
		sort_3(a);
	else if (argc == 4)
		sort_4(a, b, biggest_num(a));
	else if (argc == 5)
		sort_5(a, b, biggest_num(a), smallest_num(a));
	else
		large_sort(a, b);
	free_stack(a);
	free_stack(b);
//	system("leaks another");
}


