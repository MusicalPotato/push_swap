#include "../../includes/checker.h"

void	ft_ra(t_data *data)
{
	int	t;
	int	i;

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