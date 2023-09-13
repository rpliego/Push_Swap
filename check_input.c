/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 03:51:56 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/13 04:41:29 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	is_duplicated(char **argv, int argc, t_list *list)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if (custom_atoi(argv[j], list) == custom_atoi(argv[i], list)
				&& j != i)
			{
				list -> error = 1;
				return ;
			}
			j++;
		}
		i++;
	}
}

void	is_number(char **argv, t_list *list)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		if (!argv[i][j])
			list->error = 1;
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				list->error = 1;
				return ;
			}
			j++;
		}
		i++;
	}
}

int	is_sorted(t_list *list, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 2)
	{
		if (list -> stacka[i] > list -> stacka[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	check_input(char **argv, int argc, t_list *list)
{
	is_duplicated(argv, argc, list);
	if (list -> error == 1)
		ft_error();
	is_number(argv, list);
	if (list -> error == 1)
		ft_error();
	if (is_sorted(list, argc) == 0)
		exit(0);
}
