/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selectionsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 19:43:56 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 19:43:56 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_selectionsort(int *tab, int n)
{
	int	a;
	int	tmp;

	while (n > 1)
	{
		a = 0;
		tmp = 0;
		while (a < n)
		{
			if (tab[a] > tab[tmp])
				tmp = a;
			a++;
		}
		n--;
		ft_swap(tab + n, tab + tmp);
	}
	return ;
}
