/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:49:56 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:50:06 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct	s_data
{
	int		v;
	int		c;
	int		n;
	int		n_ope;
	int		div;
	int		*stack_a;
	int		size_a;
	int		*stack_b;
	int		size_b;
}				t_data;

#endif
