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
