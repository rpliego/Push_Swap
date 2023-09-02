/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:47:29 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/03 00:12:22 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_3(t_list *list)
{
	int	sa0;
	int	sa1;
	int	sa2;

	sa0 = list -> stacka[0];
	sa1 = list -> stacka[1];
	sa2 = list -> stacka[2];
	if (sa0 < sa1 && sa0 < sa2 && sa1 < sa2)
		return ;
	else if (sa0 > sa1 && sa1 < sa2 && sa0 < sa2)
		sa(list);
	else if (sa0 > sa1 && sa1 > sa2 && sa0 > sa2)
	{
		ra(list);
		sa(list);
	}
	else if (sa0 > sa1 && sa1 < sa2 && sa0 > sa2)
		ra(list);
	else if (sa0 < sa1 && sa1 > sa2 && sa0 < sa2)
	{
		rra(list);
		sa(list);
	}
	else
		rra(list);
}
