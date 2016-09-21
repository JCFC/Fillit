/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:11:15 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:11:59 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				ft_check2(char *array, int *ttms, int pos, int max)
{
	int		i;
	int		y;

	y = 0;
	i = 0;
	while (pos < max && y != 4)
	{
		if (array[pos] == '.')
		{
			i++;
			if (i == 4)
				return (1);
		}
		else
			return (0);
		pos = pos + (ttms[y + 1] - ttms[y]);
		y++;
	}
	return (0);
}
