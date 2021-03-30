/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:46:54 by gregoire          #+#    #+#             */
/*   Updated: 2021/03/30 18:53:57 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_matchatoi(int n, char *num)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		if (num[i] != '-')
			return (0);
		i++;
	}
	while (num[i] == '0')
		i++;
	if (n != 0)
	{
		if (num[i] != ft_abs(n) + '0')
			return (0);
	}
	else
	{
		if (num[i] != 0)
			return (0);
	}
	return (1);
}

int	ft_isint(char *num)
{
	long	n;

	n = ft_atoi(num);
	if (n > INT_MAX || n < INT_MIN
	|| ((n == 0 || n == -1)
	&& (!ft_matchatoi(n, num))))
		return (0);
	return (1);
}

int	parse_option(char **argv)
{
	int	i;

	i = 1;
	while (!ft_strncmp(argv[i], "-v", 3)
		|| !ft_strncmp(argv[i], "-c", 3)
		|| !ft_strncmp(argv[i], "-n", 3))
	{
		i++;
	}
	return (i);
}

int	parse_argv(char **argv)
{
	int	i;
	int	j;

	i = parse_option(argv);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]) && argv[i][j] != '-')
			{
				return (0);
			}
			j++;
		}
		if (!(ft_isint(argv[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
