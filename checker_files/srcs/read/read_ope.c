/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_ope.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:50:39 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:50:39 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	read_ope(t_data *data)
{
	char	*line;
	int		r;

	line = NULL;
	while ((r = get_next_line(STDIN_FILENO, &line)) > 0)
	{
		if (!(parse_ope(line)))
		{
			free(line);
			write(2, "Error\n", 6);
			return (0);
		}
		if (!(ft_stradd_back(&(data->ope), line, data->n_ope)))
			return (0);
		data->n_ope++;
	}
	if (r < 0 || ft_strlen(line) != 0)
	{
		free(line);
		write(2, "Error\n", 6);
		return (0);
	}
	free(line);
	return (1);
}
