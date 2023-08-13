/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:47:29 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/11 17:37:57 by rpliego          ###   ########.fr       */
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
	if (sa0 > sa1 && sa1 < sa2)
		case_2(list);
	else if (list -> stacka[0] < list -> stacka[1] 
		&& list -> stacka[1] > list ->stacka[2])
	{
		
	}
}

2 1 3 +
3 2 1
3 1 2
2 3 1
1 3 2

1 2 3 + 
