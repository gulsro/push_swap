/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/03 12:17:46 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/03 13:00:38 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <assert.h>

# include "ft_printf/ft_printf.h"
# include <limits.h>

typedef struct t_node
{
	int				data;
	int				order;
	int				index;
	struct t_node	*next;
	struct t_node	*prev;
}t_node;

typedef struct t_stack
{
	int		size;
	t_node	*top;
	t_node	*end;
}t_stack;

//check_numbers
int		check_repeat(t_stack *my_stack);
int		check_sorted(t_stack *my_stack);

//error
void	error_exit(void);

//input_parsing
int		ft_atoi(char *str);
int		check_all_digit(char **argv);

//utils_push_swap
void	display_stack(t_stack *my_stack);
t_node	*last_node(t_stack *my_stack);
int		biggest_num(t_stack *my_stack);
int		smallest_num(t_stack *my_stack);

//newsort
void	sort_2(t_stack *a);
void	sort_3(t_stack *a);
void	sort_4(t_stack *a, t_stack *b, int big_a);
void	sort_5(t_stack *a, t_stack *b, int big_a, int small_a);

//large_sort
void	large_sort(t_stack *a, t_stack *b);
void	sort_as_index(t_stack *my_stack);

t_stack	*initialize_stack(void);
t_node	*create_node(int value);
t_node	*pop(t_stack *t_stack);
void	free_stack(t_stack *t_stack);
void	initial_stack_elem(t_stack *t_stack, int value);
void	assign_index(t_stack *t_stack);

//operations
void	swap(int *x, int *y);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	_swap(t_stack *s, const char *msg);

void	push(t_stack *t_stack, t_node *nood);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	_pop_push(t_stack *from, t_stack *to, const char *msg);

void	ra(t_stack *a);
void	rb(t_stack *b);
void	_rotate(t_stack *s);
void	rr(t_stack *a, t_stack *b);

void	rra(t_stack *a);
void	rrb(t_stack *b);
void	_reverse_rotate(t_stack *s);
void	rrr(t_stack *a, t_stack *b);

void	swap_int(int x, int y);

#endif
