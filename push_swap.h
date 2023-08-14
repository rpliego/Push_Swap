/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpliego <rpliego@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:39:36 by rpliego           #+#    #+#             */
/*   Updated: 2023/08/14 04:04:33 by rpliego          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int	*stacka;
	int	*stackb;
	int	tlen;
	int	lena;
	int	lenb;
	int	error;
}	t_list;

void	pa(t_list *list);
int		custom_atoi(char *str, t_list *list);
void	ft_error(void);
void	ft_free_all(t_list *list);
void	check_input(char **argv, int argc, t_list *list);
void	case_2(t_list *list);
void	case_3(t_list *list);
void	swappp(int *a, int *b);
void	ra(t_list *list);
void	sa(t_list *list);
void	rra(t_list *list);

#endif