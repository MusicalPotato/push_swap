#include "../../includes/push_swap.h"

void	ft_pa(t_data *data)
{
	write(STDOUT_FILENO, "pa\n", 3);
	if (data->size_b > 0)
	{
		data->stack_a[data->size_a] = data->stack_b[data->size_b - 1];
		data->stack_b[data->size_b - 1] = 0;
		data->size_a++;
		data->size_b--;
	}
	return ;
}
