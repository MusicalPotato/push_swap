#include "../../includes/push_swap.h"

void	ft_pb(t_data *data)
{
	write(STDOUT_FILENO, "pb\n", 3);
	if (data->size_a > 0)
	{
		data->stack_b[data->size_b] = data->stack_a[data->size_a - 1];
		data->stack_a[data->size_a - 1] = 0;
		data->size_b++;
		data->size_a--;
	}
	return ;
}