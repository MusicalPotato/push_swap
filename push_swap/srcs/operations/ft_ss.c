#include "../../includes/push_swap.h"

void	ft_ss(t_data *data)
{
	int	t;

	write(STDOUT_FILENO, "ss\n", 3);
	if (data->size_a > 1)
	{
		t = data->stack_a[data->size_a - 1];
		data->stack_a[data->size_a - 1] = data->stack_a[data->size_a - 2];
		data->stack_a[data->size_a - 2] = t;
	}
	if (data->size_b > 1)
	{
		t = data->stack_b[data->size_b - 1];
		data->stack_b[data->size_b - 1] = data->stack_b[data->size_b - 2];
		data->stack_b[data->size_b - 2] = t;
	}
	return ;
}
