/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:49:40 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:09:13 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "struct.h"
# include "../libft/libft.h"
# include <stdlib.h>

t_data	*ft_lstnew_data(int	argc, char **argv);
void	ft_lstclear_data(t_data **data);

t_data	*ft_setup(int argc, char **argv);

void	algo_manager(t_data *data);
int		checker(t_data *data);
int		fi_pivot(int *stack, int size, int div);
int		fi_hi(t_data *data, int w);
int		has_inf_pivot(t_data *data, int pivot);

void	display(t_data *data);

void	do_flag(t_data *data);

int		parse_argv(char **argv);
int		parse_dup(t_data *data);

void	ft_pa(t_data *data);
void	ft_pb(t_data *data);
void	ft_ra(t_data *data);
void	ft_rb(t_data *data);
void	ft_rr(t_data *data);
void	ft_rra(t_data *data);
void	ft_rrb(t_data *data);
void	ft_rrr(t_data *data);
void	ft_sa(t_data *data);
void	ft_sb(t_data *data);
void	ft_ss(t_data *data);
void	ope_manager(t_data *data, char *name, void fct(t_data *data));

#endif
