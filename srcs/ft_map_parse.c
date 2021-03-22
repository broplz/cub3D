#include "../include/cub3d.h"

int		ft_map_parse(t_all *all, int fd, t_list **list)
{
	char	*line;

	while (get_next_line(fd, &line)	&& (ft_map_search(all, line) > 0))
	{
		if (!(ft_map_anal(line, "012WESN \0")))
			return (all->co.pflag = 0);
		if (all->co.pflag == 2)
			ft_lstadd_back(list, ft_lstnew(line));
		else
			free(line);
	}
	if (all->co.pflag == 2)
		ft_lstadd_back(list, ft_lstnew(line));
	else
		free(line);
	ft_map_size(all, *list);
	ft_map_vw(all);
	return (1);
}