/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:33:30 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/07 03:12:41 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_bottom(t_list *list, int chunk_break)
{
	int	i;

	i = list -> lena - 1;
	while (i >= 0)
	{
		if (list -> stacka[i] <= chunk_break)
			return (list->lena - i);
		i--;
	}
	return (-1);
}

int	find_top(t_list *list, int chunk_break)
{
	int	i;

	i = 0;
	while (i < list -> lena)
	{
		if (list -> stacka[i] <= chunk_break)
			return (i);
		i++;
	}
	return (-1);
}

void	make_chunk(t_list *list, int n)
{
	int	i;
	int	top;
	int	bottom;
	int	chunkl;
	int	x;

	i = 0;
	x = 1;
	chunkl = list -> tlen / n;
	while (n > 0)
	{
		while (list -> lena > 0 && i < chunkl)
		{
			top = find_top(list, chunkl);
			bottom = find_bottom(list, chunkl);
			sort_way(list, top, bottom, chunkl);
			if (list -> stackb[0] > (chunkl * x) / 2)
				rb(list);
			i++;
		}
		chunkl += list-> tlen / n;
		n--;
		x++;
	}
	int w;
	w = 0;
	while (w < list -> tlen)
	{
		printf("%i   %i\n", list -> stacka[w], list -> stackb[w]);
		w++;
	}
	printf("------\n");
	printf("a   b");
}

/*
	primero de todo tienes que saber cuantos chunks
    despues tienes que coger la longitud total y dividirla entre el numero de chunks para
    saber el tamaño de cada chunk

    despues, tienes quien buscando todos los números que encajen en ese chunk e 
	ir pasándolos, es decir, vas recorriendo el array y vas haciendo rr y compruebas 
	si están en ese chunk,por ejemplotienes 100 mums, y lo partes en 5 chunks,
	Entonces estas buscando números inferiores a 20, vas haciendo 
	rr hasta que encuentras uno y haces pb y vas pasando al siguiente y así 
	hasta que llegas a los 20 mums, entonces pasas al siguiente chunk y repites    
	hasta que vacíes el stack.Cuando vayas pasando al stack B, puedes ir comprobando 
	también si están en la primera o segunda mitad del chunk, es decir si están en el chunk - 
	chunk_size/2, si están en la primera mitad, los dejas arriba,
	 sino, les haces un rrb para mandarlo abajo.
	 
	 Ir buscando el mas grande en b y pasarlo, si me encuentro en siguiente de camino lo paso y luego hago sa
*/




