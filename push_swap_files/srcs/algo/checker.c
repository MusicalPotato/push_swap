/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:59:07 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:08:30 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int		checker(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size_a - 1)
	{
		if (data->stack_a[i] <= data->stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int		fi_pivot(int *stack, int size, int div)
{
	int	tab2[size];
	int	mid;

	mid = 0;
	while (mid < size)
	{
		tab2[mid] = stack[mid];
		mid++;
	}
	ft_shellsort(tab2, size);
	mid = (int)(size / div);
	return (tab2[mid]);
}

int		fi_hi(t_data *data, int w)
{
	int	hi;
	int	shi;
	int	i;

	hi = data->size_b - 1;
	shi = data->size_b - 2;
	if (shi < 0)
		shi = 0;
	i = hi;
	while (i >= 0)
	{
		if (data->stack_b[i] > data->stack_b[hi])
		{
			shi = hi;
			hi = i;
		}
		if (data->stack_b[i] > data->stack_b[shi]
		&& data->stack_b[i] < data->stack_b[hi])
			shi = i;
		i--;
	}
	if (w == 0)
		return (hi);
	else
		return (shi);
}

int		has_inf_pivot(t_data *data, int pivot)
{
	int	i;

	i = 0;
	while (i < data->size_a)
	{
		if (data->stack_a[i] < pivot)
			return (1);
		i++;
	}
	return (0);
}
