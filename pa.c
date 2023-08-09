/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 04:34:12 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/09 14:45:58 by rpliego          ###   ########.fr       */
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

void	pa(t_list *list)
{
	int	i;

	i = list ->lena;
	while (i-- > 0)
		swappp(&list ->stacka[i], &list ->stacka[i - 1]);
	list ->lena--;
	list ->lenb++;
	list -> stacka[0] = list -> stackb[0];
	i = 0;
	while (i++ < (list -> lenb - 1))
		list -> stackb[i] = list -> stackb[i + 1];
	write(1, "pa\n", 3);
}
