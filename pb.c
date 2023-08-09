/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:26:22 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/09 13:38:43 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swappp(int *a, int *b)
{
	int	*aux;

	aux = *a;
	*a = *b;
	*b = *aux;
}

void	pb(t_list *list)
{
	int	i;

	i = list ->lena;
	while (i-- > 0)
		swappp(list ->stackb[i], list ->stackb[i - 1]);
	list ->lena++;
	list ->lenb--;
	list -> stackb[0] = list -> stacka[0];
	i = 0;
	while (i++ < (list -> lena - 1))
		list -> stacka[i] = list -> stacka[i + 1];
	write(1, "pb\n", 3);
}
