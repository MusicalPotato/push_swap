/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:57 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 20:12:27 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc > 1)
	{
		if (!(data = ft_setup(argc, argv)))
			return (-1);
		algo_manager(data);
		do_flag(data);
		ft_lstclear_data(&data);
	}
	return (0);
}
