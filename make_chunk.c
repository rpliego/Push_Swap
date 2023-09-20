/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:33:30 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/20 01:26:31 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_chunk_5(t_list *list)
{
	int	i;
	int	chunkl;
	int	aux;

	i = 0;
	chunkl = list -> tlen / 4 + (list -> tlen % 4);
	aux = chunkl;
	while (list -> lena)
	{
		while (list -> lena > 0 && i < chunkl)
		{
			sort_way(list, chunkl);
			if (list -> stackb[0] > chunkl - (aux / 2))
				rb(list);
			i++;
		}
		chunkl += aux;
	}
}

void	make_chunk_11(t_list *list)
{
	int	i;
	int	chunkl;
	int	aux;

	i = 0;
	chunkl = list -> tlen / 8 + (list -> tlen % 8);
	aux = chunkl;
	while (list -> lena)
	{
		while (list -> lena > 0 && i < chunkl)
		{
			sort_way(list, chunkl);
			if (list -> stackb[0] > chunkl - (aux / 2))
				rb(list);
			i++;
		}
		chunkl += aux;
	}
}
