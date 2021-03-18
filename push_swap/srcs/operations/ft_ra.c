#include "../../includes/push_swap.h"

void	ft_ra(t_data *data)
{
	int	t;
	int	i;

	write(STDOUT_FILENO, "ra\n", 3);
	i = data->size_a - 1;
	t = data->stack_a[i];
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
	data->stack_a[i] = t;
	return ;
}
