#include "../../includes/checker.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc > 1)
	{
		if (!(data = ft_setup(argc, argv)))
			return (-1);
		if (!(read_ope(data)))
		{
			ft_lstclear_data(&data);
			return (-1);
		}
		exec_ope(data);
		checker(data);
		ft_lstclear_data(&data);
	}
	return (0);
}
