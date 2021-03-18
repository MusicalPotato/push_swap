/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 19:03:30 by gorban            #+#    #+#             */
/*   Updated: 2019/10/14 19:57:27 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubblesort(int *tab, int n)
{
	int	a;
	int	tmp;

	while (n > 1)
	{
		a = 0;
		tmp = tab[a];
		while (a + 1 < n)
		{
			if (tmp > tab[a + 1])
				tab[a] = tab[a + 1];
			else
			{
				tab[a] = tmp;
				tmp = tab[a + 1];
			}
			a++;
		}
		tab[a] = tmp;
		n--;
	}
	return ;
}
