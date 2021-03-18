#include "../../includes/checker.h"

void	ft_rb(t_data *data)
{
	int	t;
	int	i;

	i = data->size_b - 1;
	t = data->stack_b[i];
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
	data->stack_b[i] = t;
	return ;
}
