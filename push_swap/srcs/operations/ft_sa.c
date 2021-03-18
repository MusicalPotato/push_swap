#include "../../includes/push_swap.h"

void	ft_sa(t_data *data)
{
	int	t;

	write(STDOUT_FILENO, "sa\n", 3);
	if (data->size_a > 1)
	{
		t = data->stack_a[data->size_a - 1];
		data->stack_a[data->size_a - 1] = data->stack_a[data->size_a - 2];
		data->stack_a[data->size_a - 2] = t;
	}
	return ;
}
