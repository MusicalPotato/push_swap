/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ope.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:51:19 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:51:20 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	parse_ope(char *ope)
{
	if (ft_strncmp(ope, "pa", 3)
	&& ft_strncmp(ope, "pb", 3)
	&& ft_strncmp(ope, "ra", 3)
	&& ft_strncmp(ope, "rb", 3)
	&& ft_strncmp(ope, "rr", 3)
	&& ft_strncmp(ope, "rra", 4)
	&& ft_strncmp(ope, "rrb", 4)
	&& ft_strncmp(ope, "rrr", 4)
	&& ft_strncmp(ope, "sa", 3)
	&& ft_strncmp(ope, "sb", 3)
	&& ft_strncmp(ope, "ss", 3))
		return (0);
	return (1);
}
