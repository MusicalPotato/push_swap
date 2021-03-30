/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_manager.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:52:41 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:52:44 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ope_manager(t_data *data, char *name, void fct(t_data *data))
{
	fct(data);
	data->n_ope++;
	if (data->c != 0 && checker(data) && data->size_b == 0)
		ft_printf("\x1B[32m");
	ft_printf("%s\n", name);
	if (data->v != 0)
		display(data);
}
