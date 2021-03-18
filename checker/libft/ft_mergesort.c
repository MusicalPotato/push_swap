#include "libft.h"

static int	ft_merge(int *tab, int lo, int mid, int hi)
{
	int *tmp;
	int i1;
	int i2;
	int	n;

	if (!(tmp = malloc(sizeof(int) * (lo + (hi - lo) / 2))))
		return (0);
	i1 = lo;
	i2 = mid;
	n = 0;
	while (n < hi - lo)
	{
		if (i2 >= hi || (i1 < mid && tab[i1] < tab[i2]))
			tmp[lo] = tab[i1++];
		else
			tmp[lo] = tab[i2++];
		n++;
	}
	n = 0;
	while (lo < hi)
		tab[lo++] = tmp[n++];
	free(tmp);
	return (1);
}

int			ft_mergesort(int *tab, int lo, int hi)
{
	int	mid;

	if (hi <= lo)
		return (1);
	mid = lo + (hi - lo) / 2;
	if (!(ft_mergesort(tab, lo, mid)))
		return (0);
	if (!(ft_mergesort(tab, mid, hi)))
		return (0);
	if (!(ft_merge(tab, lo, mid, hi)))
		return (0);
	return (1);
}
