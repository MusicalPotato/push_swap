#include "libft.h"

int	ft_stradd_front(char ***strs, char *new, int size)
{
	int		i;
	char	**newstrs;

	if (!new)
		return (0);
	if (!(newstrs = malloc(sizeof(char *) * (size + 1))))
	{
		free(new);
		return (0);
	}
	i = 0;
	newstrs[i] = new;
	i++;
	while (i <= size)
	{
		newstrs[i] = (*strs)[i - 1];
		i++;
	}
	if (*strs)
		free(*strs);
	*strs = newstrs;
	return (1);
}
