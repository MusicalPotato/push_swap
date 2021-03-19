#include "../../includes/push_swap.h"

int		fpivot(int *stack, int size, int q)
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
	mid = (int)(size / 2 / q);
	return (tab2[mid]);
}

void	sort_chunk(t_data *data, int size_c)
{
	int	j;
	int	hi;
	int	i;

	j = 0;
	while (j < size_c)
	{
		hi = data->size_b - 1;
		i = hi;
		while (i >= 0)
		{
			if (data->stack_b[i] > data->stack_b[hi])
				hi = i;
			i--;
		}
		if (hi >= (int)(data->size_b / 2))
			while (hi < data->size_b - 1)
			{
				ft_rb(data);
				hi++;
			}
		else
			while (hi >= 0)
			{
				ft_rrb(data);
				hi--;
			}
		ft_pa(data);
		j++;
	}
}

void	little_sort(t_data *data)
{
	if (data->size_a == 2 &&
		data->stack_a[1] > data->stack_a[0])
		ft_sa(data);
	else if (data->size_a == 3)
	{
		if (data->stack_a[2] < data->stack_a[1])
		{
			if (data->stack_a[1] > data->stack_a[0])
				ft_rra(data);
			if (data->stack_a[2] > data->stack_a[1])
				ft_sa(data);
		}
		else
		{
			if (data->stack_a[2] > data->stack_a[0])
				ft_ra(data);
			if (data->stack_a[2] > data->stack_a[1])
				ft_sa(data);
		}
	}
	return ;
}

void	algo_manager(t_data *data)
{
	int	pivota;
	int	pivotb;
	int	rn;
	int	size_c;
	int	i;

	pivota = fpivot(data->stack_a, data->size_a, 1);
	size_c = 0;
	i = data->size_a - 1;
	if (data->size_a > 3 && !checker(data))
	{
		pivotb = fpivot(data->stack_a, data->size_a, 2);
		rn = 0;
		while (i > 0)
		{
			if (data->stack_a[data->size_a - 1] < pivota)
			{
				ft_pb(data);
				if (data->stack_b[data->size_b - 1] > pivotb)
				{
					ft_rb(data);
					rn++;
				}
				size_c++;
			}
			else
				ft_ra(data);
			i--;
		}
		while (rn > 0)
		{
			ft_rrb(data);
			rn--;
		}
		algo_manager(data);
	}
	little_sort(data);
	sort_chunk(data, size_c);
	return ;
}
