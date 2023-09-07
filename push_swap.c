/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:44:34 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/07 03:13:21 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(char **argv, int argc, t_list *list)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		list -> stacka[i] = custom_atoi(argv[i + 1], list);
		if (list -> error == 1)
			ft_error();
		i++;
	}
}

void	init_list(int argc, t_list *list)
{
	list -> error = 0;
	list -> stacka = malloc((argc - 1) * sizeof(int));
	if (!list -> stacka)
	{
		free(list);
		list -> error = 1;
	}
	list -> stackb = malloc((argc - 1) * sizeof(int));
	if (!list -> stackb)
	{
		free(list);
		free(list -> stacka);
		list -> error = 1;
	}
	list -> tlen = argc - 1;
	list -> lena = argc - 1;
	list -> lenb = 0;
}

void	pushuap(t_list *list, int argc)
{
	if (argc == 1 || argc == 2)
		return ;
	if (argc == 3)
		case_2(list);
	if (argc == 4)
		case_3(list);
	if (argc == 5)
		case_4(list);
	if (argc == 6)
		case_5(list);
	if (argc > 6)
		index_stacks(list);
	if (argc > 6 && argc <= 101)
	{
		make_chunk(list, 5);
		push_a_sorted(list);
	}
	if (argc > 101)
	{
		make_chunk(list, 11);
		push_a_sorted(list);
	}
}

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc <= 1)
		return (0);
	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	init_list(argc, list);
	if (list -> error == 1)
		ft_error();
	init_stacks(argv, argc, list);
	if (list -> error == 1)
		ft_error();
	check_input(argv, argc, list);
	if (list -> error == 1)
	{
		ft_free_all(list);
		return (0);
	}
	pushuap(list, argc);
	ft_free_all(list);
	return (0);
}
