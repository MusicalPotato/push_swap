/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:54 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:57:55 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
