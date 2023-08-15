/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 03:19:22 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/15 23:10:42 by rpliego          ###   ########.fr       */
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
