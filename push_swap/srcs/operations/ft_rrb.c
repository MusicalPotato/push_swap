#include "../../includes/push_swap.h"

void	ft_rrb(t_data *data)
{
	int	t;
	int	i;

	write(STDOUT_FILENO, "rrb\n", 4);
	i = 0;
	t = data->stack_b[i];
	while (i < data->size_b - 1)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->stack_b[i] = t;
	return ;
}
