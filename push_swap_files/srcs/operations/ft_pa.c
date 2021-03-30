/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:51:37 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:51:38 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pa(t_data *data)
{
	if (data->size_b > 0)
	{
		data->stack_a[data->size_a] = data->stack_b[data->size_b - 1];
		data->stack_b[data->size_b - 1] = 0;
		data->size_a++;
		data->size_b--;
	}
	return ;
}
