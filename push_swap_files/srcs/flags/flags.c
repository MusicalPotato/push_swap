/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:58:16 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:58:20 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	do_flag(t_data *data)
{
	if (data->c)
		ft_printf("\x1B[0m");
	if (data->n)
		ft_printf("%d Operations effectué\n", data->n_ope);
}
