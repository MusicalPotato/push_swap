#include "../../includes/checker.h"

t_data	*ft_lstnew_data(int	argc, char **argv)
{
	t_data	*lst;
	int		i;
	int		j;

	if (!(lst = malloc(sizeof(t_data))))
		return (0);
	lst->ope = NULL;
	lst->n_ope = 0;
	if (!(lst->stack_a = malloc(sizeof(int) * (argc - 1))))
	{
		free(lst);
		return (0);
	}
	if (!(lst->stack_b = malloc(sizeof(int) * (argc - 1))))
	{
		free(lst->stack_a);
		free(lst);
		return (0);
	}
	i = argc - 1;
	j = 0;
	while (i > 0)
	{
		lst->stack_a[j] = ft_atoi(argv[i]);
		lst->stack_b[j] = 0;
		i--;
		j++;
	}
	lst->size_a = argc - 1;
	lst->size_b = 0;
	return (lst);
}

void	ft_lstclear_data(t_data **data)
{
	int	i;

	i = 0;
	while (i < (*data)->n_ope)
	{
		free((*data)->ope[i]);
		(*data)->ope[i] = NULL;
		i++;
	}
	free((*data)->ope);
	(*data)->ope = NULL;
	free((*data)->stack_a);
	(*data)->stack_a = NULL;
	free((*data)->stack_b);
	(*data)->stack_b = NULL;
	(*data)->size_a = 0;
	(*data)->size_b = 0;
	free(*data);
	*data = NULL;
}
