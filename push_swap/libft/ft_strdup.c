/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorban <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:39:34 by gorban            #+#    #+#             */
/*   Updated: 2019/10/14 16:44:01 by gorban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		x;
	int		size;
	char	*copy;

	x = 0;
	size = ft_strlen(s1);
	if (!(copy = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (x < size)
	{
		copy[x] = s1[x];
		x++;
	}
	copy[x] = 0;
	return (copy);
}
