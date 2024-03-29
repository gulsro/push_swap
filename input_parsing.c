/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_parsing.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gozturk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/29 21:28:25 by gozturk       #+#    #+#                 */
/*   Updated: 2023/04/04 12:55:28 by gozturk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

int	check_all_digit(char **argv)
{
	int	i_argv;
	int	i;

	i_argv = 1;
	while (argv[i_argv])
	{
		i = 0;
		while (argv[i_argv][i])
		{
			if (ft_isdigit(argv[i_argv][i]) || (argv[i_argv][i] == '-'
						&& ft_isdigit(argv[i_argv][i + 1])))
				i++;
			else
				error_exit();
		}
		i_argv++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int				i;
	long long int	n;
	int				sign;

	i = 0;
	n = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	if ((n * sign) > INT_MAX || (n * sign) < INT_MIN)
		error_exit();
	return ((int)(n * sign));
}
