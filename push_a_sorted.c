/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_sorted.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 03:13:31 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/13 14:46:46 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_previous_rb(t_list *list, int aux)
{
	while (list -> stackb[0] < list -> lenb)
	{
		if (list -> stackb[0] == list -> lenb - 1 && aux != 1)
		{
			pa(list);
			aux = 1;
		}
		else
			rb(list);
	}
	return (aux);
}

int	check_previous_rrb(t_list *list, int aux)
{
	while (list -> stackb[0] < list -> lenb)
	{
		if (list -> stackb[0] == list -> lenb - 1 && aux != 1)
		{
			pa(list);
			aux = 1;
		}
		else
			rrb(list);
	}
	return (aux);
}

void	push_a_sorted(t_list *list)
{
	int	i;
	int	aux;

	while (list -> lenb > 0)
	{
		i = 0;
		aux = 0;
		while (list -> stackb[i] != list -> lenb)
			i++;
		if (i <= list -> lenb / 2)
			aux = check_previous_rb(list, aux);
		else if (i > list -> lenb / 2)
			aux = check_previous_rrb(list, aux);
		pa(list);
		if (aux == 1)
			sa(list);
	}
}
