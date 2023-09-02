/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 00:14:58 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/03 00:13:15 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_aux(t_list *list, int flag)
{
	if (flag == 0)
	{
		pb(list);
		case_4(list);
		pa(list);
	}
	else if (flag == 1)
	{
		ra(list);
		pb(list);
		case_4(list);
		pa(list);
	}
}

void	ft_aux2(t_list *list, int flag)
{
	if (flag == 2)
	{
		ra(list);
		ra(list);
		pb(list);
		case_4(list);
		pa(list);
	}
	else if (flag == 3)
	{
		rra(list);
		rra(list);
		pb(list);
		case_4(list);
		pa(list);
	}
	else if (flag == 4)
	{
		rra(list);
		pb(list);
		case_4(list);
		pa(list);
	}
}

void	case_5(t_list *list)
{
	int	sa0;
	int	sa1;
	int	sa2;
	int	sa3;
	int	sa4;

	sa0 = list -> stacka[0];
	sa1 = list -> stacka[1];
	sa2 = list -> stacka[2];
	sa3 = list -> stacka[3];
	sa4 = list -> stacka[4];
	if (sa0 < sa1 && sa0 < sa2 && sa0 < sa3 && sa0 < sa4)
		ft_aux(list, 0);
	else if (sa1 < sa0 && sa1 < sa2 && sa1 < sa3 && sa1 < sa4)
		ft_aux(list, 1);
	else if (sa2 < sa0 && sa2 < sa1 && sa2 < sa3 && sa2 < sa4)
		ft_aux2(list, 2);
	else if (sa3 < sa0 && sa3 < sa1 && sa3 < sa2 && sa3 < sa4)
		ft_aux2(list, 3);
	else if (sa4 < sa0 && sa4 < sa1 && sa4 < sa2 && sa4 < sa3)
		ft_aux2(list, 4);
}

// 1 * * * * +
// * 1 * * * +
// * * 1 * * +
// * * * 1 * +
// * * * * 1 +