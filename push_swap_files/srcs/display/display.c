/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:58:35 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:58:38 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	display(t_data *data)
{
	int	i;

	i = 0;
	ft_printf("| %10s |  | %10s |\n", "Stack A", "Stack B");
	ft_printf("|------------|  |------------|\n");
	while (i < data->size_a || i < data->size_b)
	{
		if (i < data->size_a)
			ft_printf("| %10d | ", data->stack_a[data->size_a - 1 - i]);
		else
			ft_printf("|            | ");
		if (i < data->size_b)
			ft_printf(" | %10d |", data->stack_b[data->size_b - 1 - i]);
		else
			ft_printf(" |            |");
		ft_printf("\n");
		i++;
	}
	ft_printf("|------------|  |------------|\n");
}
