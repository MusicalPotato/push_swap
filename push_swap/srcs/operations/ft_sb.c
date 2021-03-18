#include "../../includes/push_swap.h"

void	ft_sb(t_data *data)
{
	int	t;

	write(STDOUT_FILENO, "sb\n", 3);
	if (data->size_b > 1)
	{
		t = data->stack_b[data->size_b - 1];
		data->stack_b[data->size_b - 1] = data->stack_b[data->size_b - 2];
		data->stack_b[data->size_b - 2] = t;
	}
	return ;
}
