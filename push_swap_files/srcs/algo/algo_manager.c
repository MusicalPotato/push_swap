/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:59:27 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:31:54 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reach_highest(t_data *data, int hi)
{
	if (hi >= (int)(data->size_b / 2))
	{
		while (hi < data->size_b - 2)
		{
			ope_manager(data, "rb", ft_rb);
			hi++;
		}
		if (hi != data->size_b - 1)
		{
			hi = fi_hi(data, 1);
			if (hi >= (int)(data->size_b / 2))
				ope_manager(data, "rb", ft_rb);
			else
				ope_manager(data, "sb", ft_sb);
		}
	}
	else
		while (hi >= 0)
		{
			ope_manager(data, "rrb", ft_rrb);
			hi--;
		}
}

void	sort_chunk(t_data *data, int size_c)
{
	int	j;
	int	hi;

	j = 0;
	while (j < size_c)
	{
		hi = fi_hi(data, 0);
		reach_highest(data, hi);
		ope_manager(data, "pa", ft_pa);
		j++;
	}
}

void	little_sort(t_data *data)
{
	if (data->size_a == 2 &&
		data->stack_a[1] > data->stack_a[0])
		ope_manager(data, "sa", ft_sa);
	else if (data->size_a == 3)
	{
		if (data->stack_a[2] < data->stack_a[1])
		{
			if (data->stack_a[1] > data->stack_a[0])
				ope_manager(data, "rra", ft_rra);
			if (data->stack_a[2] > data->stack_a[1])
				ope_manager(data, "sa", ft_sa);
		}
		else
		{
			if (data->stack_a[2] > data->stack_a[0])
				ope_manager(data, "ra", ft_ra);
			if (data->stack_a[2] > data->stack_a[1])
				ope_manager(data, "sa", ft_sa);
		}
	}
	return ;
}

int		make_chunk(t_data *data, int pivota, int *size_c, int t)
{
	int	pivotb;
	int	rn;

	pivotb = fi_pivot(data->stack_a, data->size_a, data->div * 2);
	rn = 0;
	while (has_inf_pivot(data, pivota) && !(checker(data) && !data->size_b))
		if (data->stack_a[data->size_a - 1] <= pivota)
		{
			ope_manager(data, "pb", ft_pb);
			if ((data->stack_b[data->size_b - 1] > pivotb && t != 0)
			|| (data->stack_b[data->size_b - 1] <= pivotb && t == 0))
			{
				if (data->stack_a[data->size_a - 1] >= pivota
				&& has_inf_pivot(data, pivota))
					ope_manager(data, "rr", ft_rr);
				else
					ope_manager(data, "rb", ft_rb);
				if (t != 0)
					rn++;
			}
			(*size_c)++;
		}
		else
			ope_manager(data, "ra", ft_ra);
	return (rn);
}

void	algo_manager(t_data *data)
{
	int	pivota;
	int	rn;
	int	size_c;
	int	t;

	t = data->size_b;
	pivota = fi_pivot(data->stack_a, data->size_a, data->div * 1);
	size_c = 0;
	if (data->size_a > 3 && !checker(data))
	{
		rn = make_chunk(data, pivota, &size_c, t);
		while (rn > 0)
		{
			ope_manager(data, "rrb", ft_rrb);
			rn--;
		}
		algo_manager(data);
	}
	little_sort(data);
	sort_chunk(data, size_c);
	return ;
}
