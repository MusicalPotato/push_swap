#include "libft.h"

void	ft_insertionsort(int *tab, int n)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < n)
	{
		tmp = tab[i];
		j = i;
		while (j - 1 >= 0 && tab[j] < tab[j - 1])
		{
			tab[j] = tab[j - 1];
			j--;
		}
		tab[j] = tmp;
		i++;
	}
	return ;
}
