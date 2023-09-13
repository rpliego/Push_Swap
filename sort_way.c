/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_way.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:10:29 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/12 22:08:17 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_bottom(t_list *list, int chunk_break)
{
	int	i;

	i = list -> lena;
	while (i >= 0)
	{
		if (list -> stacka[i] <= chunk_break)
			return (list->lena - i);
		i--;
	}
	return (-1);
}

int	find_top(t_list *list, int chunk_break)
{
	int	i;

	i = 0;
	while (i < list -> lena)
	{
		if (list -> stacka[i] <= chunk_break)
			return (i);
		i++;
	}
	return (-1);
}

void	sort_way(t_list *list, int chunkl)
{
	int	top;
	int	bottom;

	top = find_top(list, chunkl);
	bottom = find_bottom(list, chunkl);
	if (bottom > top)
	{
		while (list -> stacka[0] > chunkl)
			ra(list);
	}
	else
	{
		while (list -> stacka[0] > chunkl)
			rra(list);
	}
	pb(list);
}
