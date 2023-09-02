/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:58:06 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/03 00:13:03 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_aux(t_list *list, int flag)
{
	if (flag == 0)
	{
		pb(list);
		case_3(list);
		pa(list);
	}
	else if (flag == 1)
	{
		ra(list);
		pb(list);
		case_3(list);
		pa(list);
	}
	else if (flag == 2)
	{
		rra(list);
		rra(list);
		pb(list);
		case_3(list);
		pa(list);
	}
}

void	case_4(t_list *list)
{
	int	sa0;
	int	sa1;
	int	sa2;
	int	sa3;

	sa0 = list -> stacka[0];
	sa1 = list -> stacka[1];
	sa2 = list -> stacka[2];
	sa3 = list -> stacka[3];
	if (sa0 < sa1 && sa0 < sa2 && sa0 < sa3)
		ft_aux(list, 0);
	else if (sa1 < sa0 && sa1 < sa2 && sa1 < sa3)
		ft_aux(list, 1);
	else if (sa2 < sa0 && sa2 < sa1 && sa2 < sa3)
		ft_aux(list, 2);
	else if (sa3 < sa0 && sa3 < sa1 && sa3 < sa2)
	{
		rra(list);
		pb(list);
		case_3(list);
		pa(list);
	}
}

// 1 * * * +
// * 1 * * +
// * * 1 * +
// * * * 1 +