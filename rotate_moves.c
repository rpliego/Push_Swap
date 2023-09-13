/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 03:19:22 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/13 04:40:22 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *list)
{
	int	i;

	i = 0;
	while (i + 1 < list -> lena)
	{
		swappp(&list -> stacka[i], &list -> stacka[i + 1]);
		i++;
	}
	write(1, "ra\n", 3);
}

void	rra(t_list *list)
{
	int	i;

	i = list -> lena - 1;
	while (i > 0)
	{
		swappp(&list -> stacka[i], &list -> stacka[i - 1]);
		i--;
	}
	write(1, "rra\n", 4);
}

void	rb(t_list *list)
{
	int	i;

	i = 0;
	while (i + 1 < list -> lenb)
	{
		swappp(&list -> stackb[i], &list -> stackb[i + 1]);
		i++;
	}
	write(1, "rb\n", 3);
}

void	rrb(t_list *list)
{
	int	i;

	i = list -> lenb - 1;
	while (i > 0)
	{
		swappp(&list -> stackb[i], &list -> stackb[i - 1]);
		i--;
	}
	write(1, "rrb\n", 4);
}
