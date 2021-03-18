#ifndef CHECKER_H
# define CHECKER_H

# include "struct.h"
# include "../libft/libft.h"
# include <stdlib.h>

t_data	*ft_lstnew_data(int	argc, char **argv);
void	ft_lstclear_data(t_data **data);

t_data	*ft_setup(int argc, char **argv);

int		read_ope(t_data *data);
void	exec_ope(t_data *data);
void	checker(t_data *data);

int		parse_argv(char **argv);
int		parse_dup(t_data *data);
int		parse_ope(char *ope);

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

#endif