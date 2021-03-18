#include "../../includes/checker.h"

int		parse_dup(t_data *data)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (i < data->size_a)
	{
		j = i + 1;
		num = data->stack_a[i];
		while (j < data->size_a)
		{
			if (num == data->stack_a[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
