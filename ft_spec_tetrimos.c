/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spec_tetrimos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 10:47:42 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 12:44:30 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			*ft_spec_tetrimos(int *tab)
{
	int		i;
	int		*incre;

	incre = (int*)malloc(sizeof(int) * 4);
	if (tab[0] == 0 && tab[1] == 1 && tab[2] == 2 && tab[3] == 3)
	{
		incre[0] = 0;
		incre[1] = 0;
		incre[2] = 0;
		incre[3] = 0;
		return (incre);
	}
	i = 0;
	while (i++ != 4)
	{
		if (tab[i] < 3)
			incre[i] = 0;
		else if (tab[i] >= 3 && tab[i] <= 8)
			incre[i] = 1;
		else if (tab[i] >= 9 && tab[i] <= 12)
			incre[i] = 2;
		else if (tab[i] > 13)
			incre[i] = 3;
	}
	return (incre);
}
