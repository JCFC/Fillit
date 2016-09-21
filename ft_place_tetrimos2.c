/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_tetrimos2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 13:10:07 by daltman           #+#    #+#             */
/*   Updated: 2015/12/17 13:11:02 by daltman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_place_tetrimos2(char *array, int *ttms, char letter, int pos)
{
	int		i;

	i = 0;
	while (i != 4)
	{
		array[pos] = letter;
		pos = pos + (ttms[i + 1] - ttms[i]);
		i++;
	}
}
