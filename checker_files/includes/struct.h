/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:45:20 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:45:20 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_data
{
	char	**ope;
	int		n_ope;
	int		*stack_a;
	int		size_a;
	int		*stack_b;
	int		size_b;
}				t_data;

#endif
