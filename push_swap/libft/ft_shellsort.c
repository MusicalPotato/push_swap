#include "libft.h"

static int	h_calculator(int n)
{
	int		h;
	float	n2;

	h = 1;
	n2 = n;
	while (h < n2 / 3)
		h = 3 * h + 1;
	return (h);
}

void		ft_shellsort(int *tab, int n)
{
	int	h;
	int	i;
	int	j;
	int	tmp;

	h = h_calculator(n);
	while (h > 0)
	{
		i = h;
		while (i < n)
		{
			tmp = tab[i];
			j = i;
			while (j - h >= 0 && tab[j - h] > tmp)
			{
				tab[j] = tab[j - h];
				j -= h;
			}
			tab[j] = tmp;
			i++;
		}
		h--;
	}
	return ;
}
