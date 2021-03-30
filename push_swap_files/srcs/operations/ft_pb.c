/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:51:46 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:51:47 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_pb(t_data *data)
{
	if (data->size_a > 0)
	{
		data->stack_b[data->size_b] = data->stack_a[data->size_a - 1];
		data->stack_a[data->size_a - 1] = 0;
		data->size_b++;
		data->size_a--;
	}
	return ;
}
