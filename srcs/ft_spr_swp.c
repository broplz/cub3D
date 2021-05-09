#include "../include/cub3d.h"

void		ft_spr_swp(t_all *all, int i, int j)
{
	t_spr	tmp;

	tmp.x = all->spr.arr_spr[i].x;
	tmp.y = all->spr.arr_spr[i].y;
	tmp.dist = all->spr.arr_spr[i].dist;

	all->spr.arr_spr[i].x = all->spr.arr_spr[j].x;
	all->spr.arr_spr[i].y = all->spr.arr_spr[j].y;
	all->spr.arr_spr[i].dist = all->spr.arr_spr[j].dist;

	all->spr.arr_spr[j].x = tmp.x;
	all->spr.arr_spr[j].y = tmp.y;
	all->spr.arr_spr[j].dist = tmp.dist;
}