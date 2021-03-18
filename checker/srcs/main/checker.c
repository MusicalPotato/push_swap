#include "../../includes/checker.h"

void	checker(t_data *data)
{
	int	i;

	if (data->size_b == 0)
	{
		i = 0;
		while (i < data->size_a - 1)
		{
			if (data->stack_a[i] <= data->stack_a[i + 1])
			{
				write(STDOUT_FILENO, "KO\n", 3);
				return ;
			}
			i++;
		}
		write(STDOUT_FILENO, "OK\n", 3);
	}
	else
		write(STDOUT_FILENO, "KO\n", 3);
	return ;
}
