/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_chunk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 02:33:30 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/11 20:51:53 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_chunk_5(t_list *list)
{
	int	i;
	int	chunkl;
	int	x;
	int	aux;

	i = 0;
	x = 1;
	chunkl = list -> tlen / 5 + (list -> tlen % 5);
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
		x++;
	}
}

void	make_chunk_11(t_list *list)
{
	int	i;
	int	chunkl;
	int	x;
	int	aux;

	i = 0;
	x = 1;
	chunkl = list -> tlen / 11 + (list -> tlen % 11);
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
		x++;
	}
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