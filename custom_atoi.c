/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 05:18:12 by rpliego           #+#    #+#             */
/*   Updated: 2023/09/13 00:15:25 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	custom_atoi(char *str, t_list *list)
{
	long long	out;
	int			i;
	int			neg;

	out = 0;
	i = 0;
	neg = 1;
	list -> error = 0;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (out * 10) + str[i] - '0';
		if ((out > 2147483647 && neg == 1) || (out > 2147483648 && neg == -1))
			list -> error = 1;
		i++;
	}
	return (out * neg);
}
