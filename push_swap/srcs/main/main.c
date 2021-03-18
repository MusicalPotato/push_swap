#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc > 1)
	{
		if (!(data = ft_setup(argc, argv)))
			return (-1);
		algo_manager(data);
		ft_lstclear_data(&data);
	}
	return (0);
}
