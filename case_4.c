/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:58:06 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/15 00:14:02 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	printf("sa0= %i\n", list -> stacka[0]);
	printf("sa1= %i\n", list -> stacka[1]);
	printf("sa2= %i\n", list -> stacka[2]);
	printf("sa3= %i\n", list -> stacka[3]);
	printf("sb0= %i\n", list -> stackb[0]);
	if (sa0 < sa1 && sa0 < sa2 && sa0 < sa3)
	{
		pb(list);
		case_3(list);
		pa(list);
	}
	else if (sa1 < sa0 && sa1 < sa2 && sa1 < sa3)
	{
		ra(list);
		pb(list);
		case_3(list);
		pa(list);
	}
	else if (sa2 < sa0 && sa2 < sa1 && sa2 < sa3)
	{
		rra(list);
		rra(list);
		pb(list);
		case_3(list);
		pa(list);
	}
	else if (sa3 < sa0 && sa3 < sa1 && sa3 < sa2)
	{
		rra(list);
		pb(list);
		case_3(list);
		pa(list);
	}
	printf("sa0= %i\n", list -> stacka[0]);
	printf("sa1= %i\n", list -> stacka[1]);
	printf("sa2= %i\n", list -> stacka[2]);
	printf("sa3= %i\n", list -> stacka[3]);
	printf("sb0= %i\n", list -> stackb[0]);
}

// 1 * * * +
// * 1 * * +
// * * 1 * +
// * * * 1 +