/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:26:22 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/06 21:25:38 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swappp(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	pb(t_list *list)
{
	int	i;

	i = list ->lenb;
	list ->lena--;
	list ->lenb++;
	while (i > 0)
	{
		swappp(&list ->stackb[i], &list ->stackb[i - 1]);
		i--;
	}
	list -> stackb[0] = list -> stacka[0];
	i = 0;
	while (i <= list -> lena - 1)
	{
		list -> stacka[i] = list -> stacka[i + 1];
		i++;
	}
	write(1, "pb\n", 3);
}

// i = 0;

// lena - 1 = 4

// 1 3 4 2 --- 1
// 3 4 2 0 --- 1