/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 03:13:31 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/11 20:51:18 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_sorted(t_list *list)
{
	int	i;

	while (list -> lenb > 0)
	{
		i = 0;
		while (list -> stackb[i] != list -> lenb)
			i++;
		if (i <= list -> lenb / 2)
		{
			while (list -> stackb[0] != list -> lenb)
				rb(list);
		}
		else
		{
			while (list -> stackb[0] != list -> lenb)
				rrb(list);
		}
		pa(list);
	}
	// int w;
	// w = 0;
	// while (w < list -> tlen)
	// {
	// 	printf("\n%i   %i", list -> stacka[w], list -> stackb[w]);
	// 	w++;
	// }
	// printf("\n------\n");
	// printf("a   b");
}
