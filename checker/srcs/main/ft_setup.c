#include "../../includes/checker.h"

t_data	*ft_setup(int argc, char **argv)
{
	t_data	*data;

	if (!(parse_argv(argv)))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (!(data = ft_lstnew_data(argc, argv)))
	{
		write(2, "Initialisation Error\n", 21);
		return (0);
	}
	if (!(parse_dup(data)))
	{
		ft_lstclear_data(&data);
		write(2, "Error\n", 6);
		return (0);
	}
	return (data);
}
