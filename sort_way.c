/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_way.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:10:29 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/07 03:13:13 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_way(t_list *list, int top, int bottom, int chunkl)
{
	int	i;
	int	j;
	int	mid;

	mid = list -> tlen / 2;
	j = 0;
	i = 0;
	if (top > mid)
	{
		while (list -> stacka[0] > chunkl)
			rra(list);
	}
	else
	{
		while (list -> stacka[0] > chunkl)
			ra(list);
	}
	pb(list);
}
