#include "../../includes/checker.h"

int	read_ope(t_data *data)
{
	char	*line;
	int		r;

	line = NULL;
	while ((r = get_next_line(STDIN_FILENO, &line)) > 0)
	{
		if (!(parse_ope(line)))
		{
			free(line);
			write(2, "Error\n", 6);
			return (0);
		}
		if (!(ft_stradd_back(&(data->ope), line, data->n_ope)))
			return (0);
		data->n_ope++;
	}
	free(line);
	if (r < 0)
		return (0);
	return (1);
}
