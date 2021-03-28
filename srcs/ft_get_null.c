/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_null.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: broplz <broplz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 22:31:47 by broplz            #+#    #+#             */
/*   Updated: 2021/03/23 22:31:47 by broplz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

char	*ft_get_null(int *flag, int *pflag)
{
	*pflag = 0;
	*flag = 0;
	ft_error_close("Param duplicates");
	return (NULL);
}
