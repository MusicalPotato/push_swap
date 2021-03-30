/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdata_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:54:14 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:55:34 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int		ft_setoption(t_data *lst, int argc, char **argv)
{
	int	i;

	i = 1;
	lst->v = 0;
	lst->c = 0;
	lst->n = 0;
	while (1)
	{
		if (!ft_strncmp(argv[i], "-v", 3))
			lst->v = 1;
		else if (!ft_strncmp(argv[i], "-c", 3))
			lst->c = 1;
		else if (!ft_strncmp(argv[i], "-n", 3))
			lst->n = 1;
		else
			break ;
		i++;
	}
	lst->size_a = argc - i;
	lst->size_b = 0;
	lst->div = 2;
	lst->n_ope = 0;
	if (lst->size_a >= 100)
		lst->div = 4;
	return (i);
}

t_data	*ft_lstnew_data(int argc, char **argv)
{
	t_data	*lst;
	int		i;
	int		j;

	if (!(lst = malloc(sizeof(t_data))))
		return (0);
	i = ft_setoption(lst, argc, argv);
	if (!(lst->stack_a = malloc(sizeof(int) * (argc - i))))
	{
		free(lst);
		return (0);
	}
	if (!(lst->stack_b = malloc(sizeof(int) * (argc - i))))
	{
		free(lst->stack_a);
		free(lst);
		return (0);
	}
	j = argc - i - 1;
	while (i < argc)
	{
		lst->stack_a[j] = ft_atoi(argv[i++]);
		lst->stack_b[j--] = 0;
	}
	return (lst);
}

void	ft_lstclear_data(t_data **data)
{
	free((*data)->stack_a);
	(*data)->stack_a = NULL;
	free((*data)->stack_b);
	(*data)->stack_b = NULL;
	(*data)->size_a = 0;
	(*data)->size_b = 0;
	free(*data);
	*data = NULL;
}
