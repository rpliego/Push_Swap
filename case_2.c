/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:39:11 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/14 03:43:22 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *list)
{
	int	aux;

	aux = list -> stacka[0];
	list -> stacka[0] = list -> stacka[1];
	list -> stacka[1] = aux;
	write(1, "sa\n", 3);
}

void	case_2(t_list *list)
{
	sa(list);
}
