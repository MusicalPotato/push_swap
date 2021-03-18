#include "../../includes/push_swap.h"

void	ft_rrr(t_data *data)
{
	int	t;
	int	i;

	write(STDOUT_FILENO, "rrr\n", 4);
	i = 0;
	t = data->stack_a[i];
	while (i < data->size_a - 1)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->stack_a[i] = t;
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
