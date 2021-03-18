#include "../../includes/push_swap.h"

int		fpivot(int	*tab, int size)
{
	int	tab2[size];
	int	mid;

	mid = 0;
	while (mid < size)
	{
		tab2[mid] = tab[mid];
		mid++;
	}
	ft_shellsort(tab2, size);
	mid = (int)(size / 2);
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

void	algo_manager(t_data *data)
{
	int	pivot;
	int	size_c;
	int	i;

	pivot = fpivot(data->stack_a, data->size_a);
	size_c = 0;
	i = data->size_a - 1;
	while (i > 0)
	{
		if (data->stack_a[data->size_a - 1] < pivot)
		{
			ft_pb(data);
			size_c++;
		}
		else
			ft_ra(data);
		i--;
	}
	if (data->size_a > 1)
		algo_manager(data);
	sort_chunk(data, size_c);
	return ;
}
