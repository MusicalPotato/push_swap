#include "../../includes/push_swap.h"

void	ft_rra(t_data *data)
{
	int	t;
	int	i;

	write(STDOUT_FILENO, "rra\n", 4);
	i = 0;
	t = data->stack_a[i];
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = t;
	return ;
}
