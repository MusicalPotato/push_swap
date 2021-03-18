# include "../../includes/checker.h"

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

int	parse_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
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
