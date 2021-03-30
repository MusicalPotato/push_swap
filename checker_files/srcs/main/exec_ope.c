/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_ope.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:53:44 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:53:44 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void	match_ope(t_data *data, int i)
{
	if (!ft_strncmp(data->ope[i], "pa", 3))
		ft_pa(data);
	else if (!ft_strncmp(data->ope[i], "pb", 3))
		ft_pb(data);
	else if (!ft_strncmp(data->ope[i], "ra", 3))
		ft_ra(data);
	else if (!ft_strncmp(data->ope[i], "rb", 3))
		ft_rb(data);
	else if (!ft_strncmp(data->ope[i], "rr", 3))
		ft_rr(data);
	else if (!ft_strncmp(data->ope[i], "rra", 4))
		ft_rra(data);
	else if (!ft_strncmp(data->ope[i], "rrb", 4))
		ft_rrb(data);
	else if (!ft_strncmp(data->ope[i], "rrr", 4))
		ft_rrr(data);
	else if (!ft_strncmp(data->ope[i], "sa", 3))
		ft_sa(data);
	else if (!ft_strncmp(data->ope[i], "sb", 3))
		ft_sb(data);
	else if (!ft_strncmp(data->ope[i], "ss", 3))
		ft_ss(data);
	return ;
}

void	exec_ope(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->n_ope)
	{
		match_ope(data, i);
		i++;
	}
	return ;
}
