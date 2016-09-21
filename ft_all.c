/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:17:51 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:17:54 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int					ft_all(t_ttms *lst, char *array, int pos, int max)
{
	int		i;

	i = 0;
	if (lst == NULL)
		return (1);
	while (pos != max)
	{
		if (array[pos] == '.' && ft_check2(array, lst->pos, pos, max) == 1)
		{
			ft_place_tetrimos2(array, lst->pos, lst->letter, pos);
			if (ft_all(lst->next, array, 0, max))
				return (1);
			ft_back2(array, pos, lst->pos);
		}
		pos++;
	}
	pos = 0;
	return (0);
}
