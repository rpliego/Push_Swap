/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:23:30 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/04 02:27:25 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stacks(t_list *list)
{
	int	i;
	int	j;
	int	index;
	int	*aux;

	aux = malloc(list -> tlen * sizeof(int));
	if (!aux)
		ft_free_all(list);
	i = -1;
	while (i++ < list -> tlen)
		aux[i] = list -> stacka[i];
	i = 0;
	while (i < list -> tlen)
	{
		j = 0;
		index = 1;
		while (j < list -> tlen)
		{
			if (j != i && aux[j] < list -> stacka[i])
				index++;
			j++;
		}
		list -> stacka[i] = index;
		i++;
	}
}
